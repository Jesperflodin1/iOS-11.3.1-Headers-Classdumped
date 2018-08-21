/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CSLFeature.h>

@class NSString, NSNumber;

@interface CSLNGramFeature : CSLFeature {

	BOOL _isStopWord;
	NSString* _token;
	NSNumber* _position;
	NSNumber* _size;
	NSString* _originalForm;

}

@property (nonatomic,retain) NSString * token;                     //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSNumber * position;                  //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) NSNumber * size;                      //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * originalForm;              //@synthesize originalForm=_originalForm - In the implementation block
@property (assign) BOOL isStopWord;                                //@synthesize isStopWord=_isStopWord - In the implementation block
-(id)init;
-(NSNumber *)size;
-(void)setSize:(NSNumber *)arg1 ;
-(id)description;
-(void)setPosition:(NSNumber *)arg1 ;
-(NSNumber *)position;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(BOOL)isStopWord;
-(NSString *)originalForm;
-(id)initWithKey:(id)arg1 fromSource:(id)arg2 withWeight:(double)arg3 token:(id)arg4 position:(id)arg5 size:(id)arg6 originalForm:(id)arg7 isStopWord:(BOOL)arg8 ;
-(void)setOriginalForm:(NSString *)arg1 ;
-(void)setIsStopWord:(BOOL)arg1 ;
@end
