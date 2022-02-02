//This code prints all the path from root to leaf nodes

class node
{
	public int iData;
	public node left;
	public node right;
	
	public node()
	{
		iData=0;left=null;right=null;
	}
	public node(int num)
	{
		iData=num;left=null;right=null;
	}
	public node(int num ,node l,node r)
	{
		iData=num;left=l;right=r;
	}
}

class tree
{
	public node root;
	public int arr[]=new int[20];
	int top=0;
	
	public tree(){root=null;}
	
	public void display(node cur)
    {
        if(cur != null)
        {
         display(cur.left);
         System.out.print(" "+cur.iData + " ");
         display(cur.right);
        }
    }
	
	public void insert(int num)
	{
		node newNode= new node(num);
		if(root ==null)
		{
			root=newNode;
			return;
		}
		node parent,cur=root;
		while(true)
		{
			parent = cur;
			if(num < cur.iData)  
		    {
				cur = cur.left;
				if(cur == null)  
				{
				  parent.left = newNode;
				  return;
				}
		    }  
			else                    
		    {
			   cur = cur.right;
			   if(cur == null)  
				{                 
				  parent.right = newNode;
				  return;
				}
		    } 
		}
	}
	
	public void print_path(node cur)
	{
		arr[top++]=cur.iData;
		if(cur.left != null || cur.right!=null)
		{
			if(cur.left != null)
			{
				print_path(cur.left);
				top--;
			}
			if(cur.right != null)
			{
				print_path (cur.right);
				top--;
			}
		}
		else
		{
			for(int i=0;i<top;i++)
				System.out.print(" "+arr[i] +" ");
			System.out.println();
		}
	}
	
}

class treePaths
{
	public static void main(String args[])
	{
		tree bitree=new tree();
		bitree.insert(50);
		bitree.insert(16);
		bitree.insert(89);
		bitree.insert(12);
		bitree.insert(45);
		bitree.insert(70);
		bitree.insert(66);
		bitree.insert(10);
		bitree.insert(95);
		bitree.insert(25);
		System.out.println("\n\tTREE :: ");
		bitree.display(bitree.root);
		System.out.println("\n\n  Root-to-Leaf paths :: ");
		bitree.print_path(bitree.root);
	}
}