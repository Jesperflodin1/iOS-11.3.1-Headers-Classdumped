/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:42:08 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Applications/AppStore.app/Frameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class SSURLRequestProperties, NSString;

@interface AppStoreKit.LoadURLOperation : NSOperation {

	 properties;
	 bag;
	 storeFrontSuffix;
	 machineDataStyle;
	 outputHandler;

}

@property (readonly,nonatomic) SSURLRequestProperties * properties; 
@property (readonly,nonatomic) id<ASKBag> bag; 
@property (readonly,nonatomic) NSString * storeFrontSuffix; 
@property (readonly,nonatomic) long long machineDataStyle; 
-(id)initWithProperties:(id)arg1 bag:(id)arg2 storeFrontSuffix:(id)arg3 machineDataStyle:(long long)arg4 ;
-(id)init;
-(void)main;
-(SSURLRequestProperties *)properties;
-(long long)machineDataStyle;
-(id<ASKBag>)bag;
-(NSString *)storeFrontSuffix;
@end
