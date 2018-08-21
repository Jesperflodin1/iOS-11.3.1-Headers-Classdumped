/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DrawingKit/DrawingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface DKDrawing : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _strokes;
	CGRect _canvasBounds;
	CGRect _strokesFrame;

}

@property (assign,nonatomic) CGRect canvasBounds;                  //@synthesize canvasBounds=_canvasBounds - In the implementation block
@property (assign,nonatomic) CGRect strokesFrame;                  //@synthesize strokesFrame=_strokesFrame - In the implementation block
@property (nonatomic,retain) NSArray * strokes;                    //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) long long totalPoints; 
+(BOOL)supportsSecureCoding;
+(id)copyOfDrawing:(id)arg1 toFitInBounds:(CGRect)arg2 ;
+(void)resizeDrawing:(id)arg1 toFitInBounds:(CGRect)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)strokes;
-(void)setStrokes:(NSArray *)arg1 ;
-(id)mutableStrokes;
-(CGRect)canvasBounds;
-(CGRect)strokesFrame;
-(void)setStrokesFrame:(CGRect)arg1 ;
-(long long)totalPoints;
-(void)addBrushStroke:(id)arg1 ;
-(id)decodedBrushStrokesWithArchiverEncodedBrushStrokes:(id)arg1 ;
-(id)encodeBrushStrokesForArchiving;
-(void)removeLastBrushStroke;
-(void)setCanvasBounds:(CGRect)arg1 ;
@end
