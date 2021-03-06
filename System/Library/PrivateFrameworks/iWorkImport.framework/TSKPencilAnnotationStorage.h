/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSPCopying.h>

@class PKDrawing, TSUImage, NSData;

@interface TSKPencilAnnotationStorage : TSPObject <TSPCopying> {

	PKDrawing* _drawingForTextRecognition;
	long long _attachedLocation;
	TSUImage* _rasterizedImage;
	NSData* _encodedDrawing;
	CGPathRef _path;
	CGPoint _markupOffset;
	CGRect _unscaledBoundsOfStrokes;

}

@property (assign,nonatomic) long long attachedLocation;                           //@synthesize attachedLocation=_attachedLocation - In the implementation block
@property (assign,nonatomic) CGPoint markupOffset;                                 //@synthesize markupOffset=_markupOffset - In the implementation block
@property (nonatomic,retain) TSUImage * rasterizedImage;                           //@synthesize rasterizedImage=_rasterizedImage - In the implementation block
@property (nonatomic,retain) NSData * encodedDrawing;                              //@synthesize encodedDrawing=_encodedDrawing - In the implementation block
@property (assign,nonatomic) CGPathRef path;                                       //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) CGRect unscaledBoundsOfStrokes;                     //@synthesize unscaledBoundsOfStrokes=_unscaledBoundsOfStrokes - In the implementation block
@property (nonatomic,readonly) CGPoint centerOfStrokes; 
@property (nonatomic,readonly) BOOL needsTextRecognition; 
@property (nonatomic,readonly) PKDrawing * drawingForTextRecognition;              //@synthesize drawingForTextRecognition=_drawingForTextRecognition - In the implementation block
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)loadFromArchive:(const PencilAnnotationStorageArchive*)arg1 unarchiver:(id)arg2 ;
-(NSData *)encodedDrawing;
-(CGPoint)markupOffset;
-(TSUImage *)rasterizedImage;
-(long long)attachedLocation;
-(CGRect)unscaledBoundsOfStrokes;
-(id)initWithContext:(id)arg1 markupOffset:(CGPoint)arg2 rasterizedImage:(id)arg3 attachedLocation:(long long)arg4 encodedDrawing:(id)arg5 path:(CGPathRef)arg6 unscaledBoundsOfStrokes:(CGRect)arg7 ;
-(void)initializeTextRecognitionIfNeeded;
-(BOOL)needsTextRecognition;
-(PKDrawing *)drawingForTextRecognition;
-(CGPoint)centerOfStrokes;
-(void)setAttachedLocation:(long long)arg1 ;
-(void)setMarkupOffset:(CGPoint)arg1 ;
-(void)setRasterizedImage:(TSUImage *)arg1 ;
-(void)setEncodedDrawing:(NSData *)arg1 ;
-(void)dealloc;
-(id)description;
-(CGPathRef)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(id)copyWithContext:(id)arg1 ;
@end

