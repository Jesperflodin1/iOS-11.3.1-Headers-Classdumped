/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSDLayoutGeometry;


@protocol TSDWrappable <NSObject>
@property (nonatomic,readonly) BOOL hasAlpha; 
@property (nonatomic,copy) TSDLayoutGeometry * geometry; 
@required
-(id)wrapSegments;
-(TSDLayoutGeometry *)geometry;
-(void)setGeometry:(id)arg1;
-(id)parent;
-(BOOL)isHTMLWrap;
-(BOOL)hasAlpha;
-(id)wrapPath;
-(CGRect*)boundsInfluencingExteriorWrap;
-(CGRect*)boundsInRoot;
-(int)wrapType;
-(int)wrapDirection;
-(int)wrapFitType;

@end

