/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUAdManagerConfigurationProvider.h>

@protocol NUAdManagerConfiguration;
@class NSObject, NSString;

@interface NUFetchedAdManagerConfigurationProvider : NSObject <NUAdManagerConfigurationProvider> {

	NSObject*<NUAdManagerConfiguration> _configuration;

}

@property (nonatomic,copy,readonly) NSObject*<NUAdManagerConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
-(NSObject*<NUAdManagerConfiguration>)configuration;
-(void)fetchConfigurationWithCompletion:(/*^block*/id)arg1 ;
@end

