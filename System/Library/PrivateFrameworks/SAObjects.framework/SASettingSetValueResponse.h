/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingResponse.h>
#import <SAObjects/SASettingSupplier.h>

@class SASettingEntity, NSString;

@interface SASettingSetValueResponse : SASettingResponse <SASettingSupplier>

@property (nonatomic,retain) SASettingEntity * setting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setValueResponse;
+(id)setValueResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setSetting:(SASettingEntity *)arg1 ;
-(SASettingEntity *)setting;
@end
