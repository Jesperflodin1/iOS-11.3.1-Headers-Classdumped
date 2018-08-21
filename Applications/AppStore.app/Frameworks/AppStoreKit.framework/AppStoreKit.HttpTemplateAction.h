/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:42:08 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Applications/AppStore.app/Frameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreKit/AppStoreKit.Action.h>

@class NSURL, NSDictionary, _TtC11AppStoreKit6Action, NSString;

@interface AppStoreKit.HttpTemplateAction : AppStoreKit.Action {

	 url;
	 method;
	 headers;
	 jsonBody;
	 formBody;
	 parameters;
	 isStoreRequest;
	 needsAuthentication;
	 retryCount;
	 disableCache;
	 successAction;
	 failureAction;
	 message;

}

@property (readonly,nonatomic) NSURL * url; 
@property (readonly,nonatomic) NSDictionary * headers; 
@property (readonly,nonatomic) BOOL isStoreRequest; 
@property (readonly,nonatomic) BOOL needsAuthentication; 
@property (readonly,nonatomic) long long retryCount; 
@property (readonly,nonatomic) BOOL disableCache; 
@property (readonly,nonatomic) _TtC11AppStoreKit6Action * successAction; 
@property (readonly,nonatomic) _TtC11AppStoreKit6Action * failureAction; 
@property (readonly,nonatomic) NSString * message; 
-(BOOL)isStoreRequest;
-(_TtC11AppStoreKit6Action *)successAction;
-(_TtC11AppStoreKit6Action *)failureAction;
-(long long)retryCount;
-(NSURL *)url;
-(NSString *)message;
-(BOOL)disableCache;
-(BOOL)needsAuthentication;
-(NSDictionary *)headers;
@end

