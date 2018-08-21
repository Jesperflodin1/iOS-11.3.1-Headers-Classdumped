/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, TSUBezierPath;

@interface TSDHyperlinkRegion : NSObject {

	NSURL* mURL;
	TSUBezierPath* mBezierPath;

}

@property (nonatomic,retain) NSURL * URL; 
@property (nonatomic,retain) TSUBezierPath * bezierPath; 
+(id)hyperlinkRegionWithURL:(id)arg1 bezierPath:(id)arg2 ;
-(void)dealloc;
-(TSUBezierPath *)bezierPath;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setBezierPath:(TSUBezierPath *)arg1 ;
-(id)initWithURL:(id)arg1 bezierPath:(id)arg2 ;
@end

