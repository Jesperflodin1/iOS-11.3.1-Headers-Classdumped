/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface FADeclineChildTransferRequest : AAFamilyRequest {

	NSString* _requestCode;

}

@property (nonatomic,copy) NSString * requestCode;              //@synthesize requestCode=_requestCode - In the implementation block
-(id)urlRequest;
-(id)urlString;
-(NSString *)requestCode;
-(void)setRequestCode:(NSString *)arg1 ;
-(BOOL)isUserInitiated;
@end

