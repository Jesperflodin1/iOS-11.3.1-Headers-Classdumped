/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UAPBIRConverter.h>

@class NSString;

@interface UAPBIRIdentityConverter : NSObject <UAPBIRConverter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerConverter;
-(id)typeString;
-(id)convertPlatformDataToIR:(id)arg1 ;
-(id)convertIRDataToPlatform:(id)arg1 ;
@end

