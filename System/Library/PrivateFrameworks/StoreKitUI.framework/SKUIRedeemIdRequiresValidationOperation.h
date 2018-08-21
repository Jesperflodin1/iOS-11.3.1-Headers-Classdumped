/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISDialogOperationDelegate.h>

@class SKUIRedeemViewController, NSString;

@interface SKUIRedeemIdRequiresValidationOperation : ISOperation <ISDialogOperationDelegate> {

	/*^block*/id _resultBlock;
	SKUIRedeemViewController* _redeemViewController;

}

@property (copy) id resultBlock;                                                                  //@synthesize resultBlock=_resultBlock - In the implementation block
@property (assign,nonatomic,__weak) SKUIRedeemViewController * redeemViewController;              //@synthesize redeemViewController=_redeemViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(void)setRedeemViewController:(SKUIRedeemViewController *)arg1 ;
-(void)setResultBlock:(id)arg1 ;
-(void)operation:(id)arg1 selectedButton:(id)arg2 ;
-(id)resultBlock;
-(id)_authenticationContext;
-(SKUIRedeemViewController *)redeemViewController;
-(BOOL)_performAuthentication;
-(id)_subOperationWithBagKey:(id)arg1 ;
-(void)_logResultsForSuccess:(BOOL)arg1 shouldVerify:(BOOL)arg2 failureReason:(id)arg3 error:(id)arg4 ;
@end

