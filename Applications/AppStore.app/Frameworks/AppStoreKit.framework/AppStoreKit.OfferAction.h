/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:42:07 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Applications/AppStore.app/Frameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreKit/AppStoreKit.Action.h>

@class NSString;

@interface AppStoreKit.OfferAction : AppStoreKit.Action {

	 purchaseToken;
	 adamId;
	 bundleId;
	 lineItem;

}

@property (readonly,nonatomic) id purchaseToken; 
@property (readonly,nonatomic) NSString * bundleId; 
@property (readonly,nonatomic) NSString * lineItem; 
@property (readonly,nonatomic) BOOL isRedownload; 
-(id)purchaseToken;
-(NSString *)bundleId;
-(BOOL)isRedownload;
-(NSString *)lineItem;
@end

