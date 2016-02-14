//
//  ExploreViewController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MGScrollView.h"
#import "MGTableBoxStyled.h"
#import "MGLineStyled.h"
#import "PhotoBox.h"
#import "SDSegmentedControl.h"

#import "DetailViewController.h"
@interface ExploreViewController : UIViewController<UIScrollViewDelegate,UIGestureRecognizerDelegate,UIWebViewDelegate,MBProgressHUDDelegate>
{
    MGScrollView *scroller;
    CGPoint initialContentOffset;
    SDSegmentedControl *segmentedControl;
    UIWebView *webView;
    UIActivityIndicatorView *ind;
    MBProgressHUD *HUD;
    NSMutableArray *itemsArray;
}
@end
