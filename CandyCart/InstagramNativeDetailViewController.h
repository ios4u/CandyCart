//
//  InstagramNativeDetailViewController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InstagramNativeDetailViewController : UIViewController<UIScrollViewDelegate>
{
    MGScrollView *scroller;
    MPMoviePlayerController *player;
    NSDictionary *postInfo;
}
-(void)setPostInfo:(NSDictionary*)pInfo;
@end
