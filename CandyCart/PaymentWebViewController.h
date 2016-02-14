//
//  PaymentWebViewController.h
//  eCommerce
//
//  Created by SerfCompany (serfcompany@gmail.com) on 11/2/15.
//  Copyright (c) 2015 SerfCompany. All rights reserved.
//

#import <UIKit/UIKit.h>
@class OrderViewController;
@interface PaymentWebViewController : UIViewController<UIWebViewDelegate,MBProgressHUDDelegate>
{
    UIWebView *webViewSe;
    NSString *urls;
    CGPoint initialContentOffset;
      MBProgressHUD *HUD;
    OrderViewController*order;
}
-(void)loadUrlInWebView:(NSString*)url;
-(void)setOrderViewController:(OrderViewController *)orders;
@end
