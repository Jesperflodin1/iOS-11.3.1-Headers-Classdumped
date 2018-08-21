/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface NSFileAccessIntent : NSObject {

	NSURL* _url;
	BOOL _isRead;
	long long _options;

}

@property (copy) NSURL * URL;                                        //@synthesize url=_url - In the implementation block
@property (readonly) BOOL isRead;                                    //@synthesize isRead=_isRead - In the implementation block
@property (readonly) unsigned long long readingOptions; 
@property (readonly) unsigned long long writingOptions; 
+(id)readingIntentWithURL:(id)arg1 options:(unsigned long long)arg2 ;
+(id)writingIntentWithURL:(id)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)readingOptions;
-(unsigned long long)writingOptions;
-(void)dealloc;
-(id)description;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(BOOL)isRead;
@end
