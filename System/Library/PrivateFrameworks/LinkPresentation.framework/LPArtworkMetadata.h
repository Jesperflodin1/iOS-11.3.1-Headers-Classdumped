/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary;

@interface LPArtworkMetadata : NSObject <NSSecureCoding, NSCopying> {

	unsigned _version;
	NSURL* _URL;
	NSDictionary* _colors;

}

@property (nonatomic,readonly) unsigned version;               //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSURL * URL;                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSDictionary * colors;              //@synthesize colors=_colors - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)setColors:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSDictionary *)colors;
-(unsigned)version;
@end

