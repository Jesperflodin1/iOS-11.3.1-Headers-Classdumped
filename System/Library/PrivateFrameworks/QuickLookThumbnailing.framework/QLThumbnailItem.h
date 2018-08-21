/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSData;

@interface QLThumbnailItem : NSObject <NSSecureCoding> {

	NSString* _fileExtensionToken;
	long long _fileExtensionHandle;
	NSURL* _url;
	NSData* _data;
	NSString* _contentType;

}

@property (readonly) NSURL * url;                                   //@synthesize url=_url - In the implementation block
@property (readonly) NSData * data;                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSString * contentType;              //@synthesize contentType=_contentType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(NSData *)data;
-(NSString *)contentType;
-(void)issueFileExtension;
-(void)consumeFileExtension;
-(id)_issueFileExtensionForURL:(id)arg1 ;
@end

