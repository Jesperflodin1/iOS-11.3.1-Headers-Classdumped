/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/_INSiriAuthorizationManagerExport.h>

@class NSString;

@interface _INSiriAuthorizationManager : NSObject <_INSiriAuthorizationManagerExport>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSiriAuthorizationRestricted;
+(long long)_siriAuthorizationStatusForAppID:(id)arg1 ;
+(BOOL)_siriEnabled;
+(long long)_rawSiriAuthorizationStatusForAppID:(id)arg1 ;
+(id)_tccAccessInfoForBundle:(id)arg1 ;
+(void)_requestSiriAuthorization:(/*^block*/id)arg1 auditToken:(SCD_Struct_IN7)arg2 ;
@end

