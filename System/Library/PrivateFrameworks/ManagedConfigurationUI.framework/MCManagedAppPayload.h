/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCManagedAppPayload : MCPayload {

	NSString* _managedAppID;

}

@property (nonatomic,retain) NSString * managedAppID;              //@synthesize managedAppID=_managedAppID - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)title;
-(NSString *)managedAppID;
-(id)initWithManagedAppID:(id)arg1 profile:(id)arg2 ;
-(void)setManagedAppID:(NSString *)arg1 ;
@end

