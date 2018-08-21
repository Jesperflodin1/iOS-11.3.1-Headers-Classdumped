/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString, BSSettings;

@interface SSImageIdentifierUpdate : NSObject <BSXPCCoding> {

	NSString* _imageIdentifier;
	NSString* _environmentDescriptionIdentifier;

}

@property (nonatomic,copy) NSString * imageIdentifier;                               //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
@property (nonatomic,copy) NSString * environmentDescriptionIdentifier;              //@synthesize environmentDescriptionIdentifier=_environmentDescriptionIdentifier - In the implementation block
@property (nonatomic,readonly) BSSettings * bsSettings; 
@property (nonatomic,readonly) NSString * briefDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)briefDescription;
-(void)setImageIdentifier:(NSString *)arg1 ;
-(NSString *)imageIdentifier;
-(NSString *)environmentDescriptionIdentifier;
-(BSSettings *)bsSettings;
-(void)setEnvironmentDescriptionIdentifier:(NSString *)arg1 ;
@end

