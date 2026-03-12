package Java.Mar2026.Day3_11_2026;

public class Day3_11_2026 {
    static class TreeNode{
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode(int val){
            this.val=val;
        }
    }

    public static int maxDepth(TreeNode root){
        if(root == null){
            return 0;
        }
            return 1 + Math.max(maxDepth(root.left),maxDepth(root.right));   
    }

    public static TreeNode invertTree(TreeNode root){
        if(root == null){
            return root;
        }

        TreeNode temp = root.left;
        root.left = root.right;
        root.right = temp;

        invertTree(root.left);
        invertTree(root.right);

        return root;
    }

    public static void main(String [] args){
        TreeNode root = new TreeNode(3);
        root.left = new TreeNode(9);
        root.right = new TreeNode(20);
        root.right.left = new TreeNode(15);
        root.right.right = new TreeNode(7);

        System.out.println(maxDepth(root));
    }
}
