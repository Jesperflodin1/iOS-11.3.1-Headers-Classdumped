/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class SKUIClientContext, NSString, UIColor, SKUIColorScheme, SKUILoadingView;

@interface SKUILoadingViewController : UIViewController {

	SKUIClientContext* _clientContext;
	NSString* _loadingText;
	UIColor* _backgroundColor;
	SKUIColorScheme* _spinnerColorScheme;
	SKUILoadingView* _loadingView;

}

@property (nonatomic,retain) SKUILoadingView * loadingView;                     //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,readonly) SKUIClientContext * clientContext;               //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSString * loadingText;                            //@synthesize loadingText=_loadingText - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * spinnerColorScheme;              //@synthesize spinnerColorScheme=_spinnerColorScheme - In the implementation block
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(SKUIClientContext *)clientContext;
-(id)initWithClientContext:(id)arg1 ;
-(void)_initializeLoadingView;
-(void)setLoadingView:(SKUILoadingView *)arg1 ;
-(SKUILoadingView *)loadingView;
-(NSString *)loadingText;
-(void)setLoadingText:(NSString *)arg1 ;
-(SKUIColorScheme *)spinnerColorScheme;
-(void)setSpinnerColorScheme:(SKUIColorScheme *)arg1 ;
@end

