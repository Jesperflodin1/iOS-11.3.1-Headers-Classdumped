/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAEmailVettingRequest.h>

@class NSString;

@interface AACompleteEmailVettingRequest : AAEmailVettingRequest {

	NSString* _token;

}
+(Class)responseClass;
-(id)bodyDictionary;
-(id)initWithAccount:(id)arg1 token:(id)arg2 ;
-(id)initWithURLString:(id)arg1 account:(id)arg2 token:(id)arg3 ;
-(id)urlString;
@end

