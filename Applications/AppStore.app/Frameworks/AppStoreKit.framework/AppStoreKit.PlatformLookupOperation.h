/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:42:08 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Applications/AppStore.app/Frameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSArray, NSString;

@interface AppStoreKit.PlatformLookupOperation : NSOperation {

	 bag;
	 itemIdentifiers;
	 lookupOptions;
	 storeFrontSuffix;
	 headerProvider;
	 responseHandler;
	 cache;

}

@property (readonly,nonatomic) id<ASKBag> bag; 
@property (readonly,nonatomic) NSArray * itemIdentifiers; 
@property (copy,nonatomic) NSString * storeFrontSuffix; 
-(id)makePlatformRequestOperation;
-(id)init;
-(void)main;
-(id<ASKBag>)bag;
-(NSString *)storeFrontSuffix;
-(void)setStoreFrontSuffix:(NSString *)arg1 ;
-(NSArray *)itemIdentifiers;
@end

