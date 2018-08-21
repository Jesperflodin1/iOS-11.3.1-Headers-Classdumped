/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIViewController, SKUIClientContext, UIImage;

@interface SKUIReviewInAppConfiguration : NSObject {

	BOOL _sandboxed;
	NSString* _itemID;
	NSString* _title;
	UIViewController* _viewController;
	SKUIClientContext* _clientContext;
	NSString* _customDescription;
	UIImage* _icon;

}

@property (nonatomic,copy) NSString * itemID;                                //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) NSString * customDescription;                     //@synthesize customDescription=_customDescription - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (assign,getter=isSandboxed,nonatomic) BOOL sandboxed;              //@synthesize sandboxed=_sandboxed - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImage *)icon;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setItemID:(NSString *)arg1 ;
-(NSString *)customDescription;
-(void)setCustomDescription:(NSString *)arg1 ;
-(BOOL)isSandboxed;
-(void)setSandboxed:(BOOL)arg1 ;
-(NSString *)itemID;
@end
