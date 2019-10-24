//find postorder from preorder traversal
#include<iostream>
using namespace std;

void postorder(int pre[],int n,int minval,int maxval,int &preindex){
    if(preindex==n) return;

    if(pre[preindex]<minval || pre[preindex]>maxval) return;

    int val=pre[preindex];
    preindex++;
    postorder(pre,n,minval,val,preindex);
    postorder(pre,n,val,maxval,preindex);
    cout<<val<<" ";


void findpostorder(int pre[],int n)
{
    int preindex=0;
    postorder(pre,n,INT_MIN,INT_MAX,preindex);
}
int main()
{
    int pre[]={40 ,30 ,35 ,80 ,100};
    int n = sizeof(pre)/sizeof(pre[0]);
    cout<<"Postorder Traversal: ";
    findpostorder(pre,n);
    return 0;
}
