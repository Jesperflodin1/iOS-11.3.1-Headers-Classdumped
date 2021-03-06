/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSURL;

@interface CRKBook : NSObject <NSSecureCoding> {

	BOOL _hasChapters;
	NSString* _title;
	NSString* _author;
	NSString* _path;
	NSData* _image;
	NSURL* _webURL;
	long long _type;

}

@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * author;               //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) NSString * path;                 //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSData * image;                  //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSURL * webURL;                  //@synthesize webURL=_webURL - In the implementation block
@property (assign,nonatomic) long long type;                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasChapters;              //@synthesize hasChapters=_hasChapters - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)author;
-(NSURL *)webURL;
-(void)setAuthor:(NSString *)arg1 ;
-(id)init;
-(void)setImage:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)path;
-(NSData *)image;
-(void)setPath:(NSString *)arg1 ;
-(void)setWebURL:(NSURL *)arg1 ;
-(void)setHasChapters:(BOOL)arg1 ;
-(id)imageDescription;
-(BOOL)hasChapters;
@end

