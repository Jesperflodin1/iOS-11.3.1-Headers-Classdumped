/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface ASDStoreItemMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _propertiesDictionary;

}

@property (nonatomic,readonly) NSDictionary * propertiesDictionary;              //@synthesize propertiesDictionary=_propertiesDictionary - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) long long storeItemIdentifier; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cancelDownloadURL;
-(id)requiredDeviceCapabilities;
-(id)storeTransationID;
-(long long)storeItemIdentifier;
-(NSDictionary *)propertiesDictionary;
@end
