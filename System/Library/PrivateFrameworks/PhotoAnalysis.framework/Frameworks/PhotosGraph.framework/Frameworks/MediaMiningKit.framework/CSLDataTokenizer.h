/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CSLDataTokenizer : NSObject {

	NSArray* _tagschemes;

}

@property (retain) NSArray * tagschemes;              //@synthesize tagschemes=_tagschemes - In the implementation block
+(id)languageForString:(id)arg1 ;
-(id)init;
-(id)simpleTokenizeData:(id)arg1 usingLocale:(id)arg2 ;
-(id)tokenizeData:(id)arg1 usingLocale:(id)arg2 ;
-(void)test;
-(NSArray *)tagschemes;
-(void)setTagschemes:(NSArray *)arg1 ;
@end

