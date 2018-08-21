/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFileProviderServiceSource.h>

@class NSString, NSFileProviderExtension, FPXExtensionContext;

@interface FPXDeprecatedMethodsServiceSource : NSObject <NSFileProviderServiceSource> {

	NSString* _serviceName;
	NSString* _itemIdentifier;
	NSFileProviderExtension* _instance;
	FPXExtensionContext* _extensionContext;

}

@property (nonatomic,copy,readonly) NSString * serviceName; 
-(id)makeListenerEndpointAndReturnError:(id*)arg1 ;
-(id)initWithServiceName:(id)arg1 itemIdentifier:(id)arg2 instance:(id)arg3 extensionContext:(id)arg4 ;
-(NSString *)serviceName;
@end

