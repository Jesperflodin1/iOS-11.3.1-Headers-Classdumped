/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXAdvertisingSettingsProvider.h>

@protocol SXAdvertisingSettingsProvider <NSObject>
@property (nonatomic,readonly) id<SXAdvertisingSettings> advertisingSettings; 
@required
-(id<SXAdvertisingSettings>)advertisingSettings;

@end


@protocol SXDocumentControllerProvider;
@class NSString;

@interface SXAdvertisingSettingsProvider : NSObject <SXAdvertisingSettingsProvider> {

	id<SXDocumentControllerProvider> _documentControllerProvider;

}

@property (nonatomic,readonly) id<SXDocumentControllerProvider> documentControllerProvider;              //@synthesize documentControllerProvider=_documentControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXAdvertisingSettings> advertisingSettings; 
-(id<SXDocumentControllerProvider>)documentControllerProvider;
-(id)initWithDocumentControllerProvider:(id)arg1 ;
-(id<SXAdvertisingSettings>)advertisingSettings;
@end

