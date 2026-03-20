package com.example.demo;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.bind.annotation.PathVariable;
import java.util.ArrayList;

@RestController
public class UserController {
    @GetMapping("/user")
    public User getUser(){
        return new User("Taro",67);
    }


    @GetMapping("/user/{name}")
    public User getUserByName(@PathVariable String name){
    return new User(name ,23);
    }

    private ArrayList<User> users = new ArrayList<>();

    public UserController(){
        users.add(new User("Taro",23));
        users.add(new User("Kenji", 30));
        users.add(new User("Yuki", 25));
    }

    @GetMapping("/users")
    public ArrayList<User> getAllUsers(){
        return users;
    }

    @PostMapping("/users")
    public User addUser(@RequestBody User user){
        users.add(user);
        return user;
    }
}