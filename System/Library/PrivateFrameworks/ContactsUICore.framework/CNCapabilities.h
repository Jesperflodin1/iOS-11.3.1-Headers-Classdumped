/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNCapabilities.h>

@protocol CNCapabilities <NSObject>
@property (nonatomic,readonly) BOOL areTelephonyCallsSupported; 
@property (nonatomic,readonly) BOOL isiMessageSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeVideoSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeAudioSupported; 
@property (nonatomic,readonly) BOOL isPaySupported; 
@required
-(BOOL)isFaceTimeVideoSupported;
-(BOOL)isPaySupported;
-(BOOL)areTelephonyCallsSupported;
-(BOOL)isiMessageSupported;
-(BOOL)isFaceTimeAudioSupported;

@end


@class NSString;

@interface CNCapabilities : NSObject <CNCapabilities>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL areTelephonyCallsSupported; 
@property (nonatomic,readonly) BOOL isiMessageSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeVideoSupported; 
@property (nonatomic,readonly) BOOL isFaceTimeAudioSupported; 
@property (nonatomic,readonly) BOOL isPaySupported; 
-(BOOL)isFaceTimeVideoSupported;
-(BOOL)isPaySupported;
-(BOOL)areTelephonyCallsSupported;
-(BOOL)isiMessageSupported;
-(BOOL)isFaceTimeAudioSupported;
@end
