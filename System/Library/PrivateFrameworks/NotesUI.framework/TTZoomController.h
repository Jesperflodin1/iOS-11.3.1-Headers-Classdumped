/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesUI/NotesUI-Structs.h>
@interface TTZoomController : NSObject {

	double _zoomFactor;
	double _checklistZoomFactor;

}

@property (assign,nonatomic) double zoomFactor;                       //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign,nonatomic) double checklistZoomFactor;              //@synthesize checklistZoomFactor=_checklistZoomFactor - In the implementation block
-(id)init;
-(void)setZoomFactor:(double)arg1 ;
-(double)zoomFactor;
-(id)unzoomAttributedString:(id)arg1 ;
-(id)reallyZoomFontInAttributes:(id)arg1 zoomDirection:(BOOL)arg2 ;
-(UIFont*)zoomFont:(UIFont*)arg1 ;
-(UIFont*)unzoomFont:(UIFont*)arg1 ;
-(id)reallyZoomAttributes:(id)arg1 zoomDirection:(BOOL)arg2 ;
-(id)reallyZoomAttributedString:(id)arg1 zoomDirection:(BOOL)arg2 ;
-(double)checklistZoomFactor;
-(id)zoomFontInAttributes:(id)arg1 ;
-(id)unzoomFontInAttributes:(id)arg1 ;
-(id)zoomAttributes:(id)arg1 ;
-(id)unzoomAttributes:(id)arg1 ;
-(id)zoomAttributedString:(id)arg1 ;
-(void)setChecklistZoomFactor:(double)arg1 ;
@end

