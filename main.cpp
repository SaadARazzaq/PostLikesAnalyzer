#include <iostream>
using namespace std;

double average_likes(int post_likes[], int totalPosts){

    double average = 0.0;
    int sum = 0;

    for(int i = 0; i < totalPosts; i++){
        sum = sum + post_likes[i];
    }

    average = static_cast<double>(sum) / totalPosts;

    return average;

}

int most_liked_post(int post_likes[], int totalPosts){

    int max = -999;

    for(int i = 0; i < totalPosts; i++){
        if(post_likes[i] > max) {
            max = post_likes[i];
        }
    }

    return max;

}

int least_liked_post(int post_likes[], int totalPosts){

    int min = 99999;

    for(int i = 0; i < totalPosts; i++){
        if(post_likes[i] < min) {
            min = post_likes[i];
        }
    }

    return min;

}

int main(){

    int totalPosts = 0, max = 0, min = 0;
    double  average = 0.0;

    cout<<"Enter total posts you have likes on: ";
    cin>>totalPosts;

    int* post_likes = new int[totalPosts];

    for(int i = 0; i < totalPosts; i++){
        cout<<"\nEnter total likes of Post "<<i+1<<": ";
        cin>>post_likes[i];
    }

    average = average_likes(post_likes, totalPosts);
    max = most_liked_post(post_likes, totalPosts);
    min = least_liked_post(post_likes, totalPosts);

    cout<<"\n\n->\tAVERAGE POST LIKES: "<<average;
    cout<<"\n\n->\tMOST LIKED POST: "<<max;
    cout<<"\n\n->\tLEAST LIKED POST: "<<min;

    return 0;
}
