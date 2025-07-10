 //Check if a linked list is palindrome or not.
  bool checkPalindrome(vector<int> arr)
  {
    int n = arr.size();
    int s = 0;
    int e = n-1;

    while(s<e)
    {
        if(arr[s] != arr[e])
        {
        return 0;
        }
    } 
      s++;
      e--;
        return 1;
  }


bool isPalindrome(node* head)
{
    vector<int> arr;        //subse pehle ek array create kar lenge

    node* temp = head;     //temp ko head pe point kerwaya, fir loop lagaya i jab tak temp null ke barabar nii ho jata temp ke data ko array me push ker do.
    while(temp != NULL)   
    {
        arr.push_back(temp->data);
        temp = temp->next;            //or temp ko aage bada do.
    }

    return checkPalindrome(arr);
}
