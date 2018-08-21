/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WebResourcePrivate, NSData, NSURL, NSString;

@interface WebResource : NSObject <NSCoding, NSCopying> {

	WebResourcePrivate* _private;

}

@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * MIMEType; 
@property (nonatomic,copy,readonly) NSString * textEncodingName; 
@property (nonatomic,copy,readonly) NSString * frameName; 
-(ArchiveResource*)_coreResource;
-(id)_initWithCoreResource:(Ref<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> >*)arg1 ;
-(id)_initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 response:(id)arg6 copyData:(BOOL)arg7 ;
-(void)_ignoreWhenUnarchiving;
-(id)_initWithData:(id)arg1 URL:(id)arg2 response:(id)arg3 ;
-(id)_suggestedFilename;
-(id)_response;
-(id)_stringValue;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(NSURL *)URL;
-(NSString *)MIMEType;
-(id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 ;
-(NSString *)frameName;
-(NSString *)textEncodingName;
@end
