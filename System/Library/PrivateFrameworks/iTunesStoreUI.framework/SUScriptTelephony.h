/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface SUScriptTelephony : SUScriptObject {

	NSObject*<OS_dispatch_queue> _telephonyQueue;
	CTServerConnectionRef _telephonyServer;

}

@property (getter=isCellularRoaming,nonatomic,readonly) id cellularRoaming; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSString * mobileCountryCode; 
@property (nonatomic,readonly) NSString * mobileNetworkCode; 
@property (nonatomic,readonly) NSString * operatorName; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSString * providerName; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(NSString *)countryCode;
-(id)attributeKeys;
-(NSString *)providerName;
-(id)init;
-(void)dealloc;
-(NSString *)phoneNumber;
-(BOOL)_checkIfIsAllowed;
-(id)sendSMSWithBodyText:(id)arg1 digits:(id)arg2 countryCode:(id)arg3 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSString *)operatorName;
-(id)formattedPhoneNumber:(id)arg1 ;
-(id)isCellularRoaming;
-(NSString *)mobileCountryCode;
-(NSString *)mobileNetworkCode;
@end

