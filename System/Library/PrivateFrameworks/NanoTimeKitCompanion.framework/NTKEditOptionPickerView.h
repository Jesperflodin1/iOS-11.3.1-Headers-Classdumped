/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, NTKPolygonCylinderView, UIView;

@interface NTKEditOptionPickerView : UIView {

	NSArray* _rows;
	unsigned long long _visibleRowBufferSize;
	/*^block*/id _optionToViewMapper;
	BOOL _active;
	NTKPolygonCylinderView* _cylinderView;
	unsigned long long _numberOfSides;
	UIView* _selectedOptionView;
	unsigned long long _numberOfRows;
	unsigned long long _selectedRowIndex;
	UIEdgeInsets _padding;

}

@property (nonatomic,readonly) NTKPolygonCylinderView * cylinderView;              //@synthesize cylinderView=_cylinderView - In the implementation block
@property (nonatomic,copy) id optionToViewMapper;                                  //@synthesize optionToViewMapper=_optionToViewMapper - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSides;                     //@synthesize numberOfSides=_numberOfSides - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                 //@synthesize padding=_padding - In the implementation block
@property (nonatomic,readonly) id selectedOption; 
@property (nonatomic,readonly) UIView * selectedOptionView;                        //@synthesize selectedOptionView=_selectedOptionView - In the implementation block
@property (assign,nonatomic) BOOL active;                                          //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfRows;                    //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign,nonatomic) unsigned long long selectedRowIndex;                  //@synthesize selectedRowIndex=_selectedRowIndex - In the implementation block
-(void)layoutSubviews;
-(id)description;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(unsigned long long)numberOfRows;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(id)optionAtIndex:(unsigned long long)arg1 ;
-(void)setTransitionFraction:(double)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)setSelectedRowIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setNumberOfSides:(unsigned long long)arg1 ;
-(unsigned long long)selectedRowIndex;
-(id)initWithOptions:(id)arg1 selectedOption:(id)arg2 ;
-(void)setOptionToViewMapper:(id)arg1 ;
-(NTKPolygonCylinderView *)cylinderView;
-(void)_tileCylinderForRotationDirection:(long long)arg1 ;
-(id)selectedOption;
-(id)_selectedFaceView;
-(CGRect)_frameForCylinderView;
-(Class)_cylinderFaceViewClass;
-(void)_willDisplayFaceView:(id)arg1 ;
-(void)_configureFaceView:(id)arg1 forOption:(id)arg2 ;
-(void)applyBreathingScale:(double)arg1 ;
-(void)applyRubberBandingFraction:(double)arg1 ;
-(void)_rotateToSelectedRow;
-(void)_rotateAnimatedToSelectedRowFromRow:(unsigned long long)arg1 ;
-(void)decrementSelection;
-(void)incrementSelection;
-(void)_enumerateFaceViewsWithBlock:(/*^block*/id)arg1 ;
-(id)_faceViewAtFaceIndex:(unsigned long long)arg1 ;
-(void)setSelectedRowIndex:(unsigned long long)arg1 ;
-(id)optionToViewMapper;
-(unsigned long long)numberOfSides;
-(UIView *)selectedOptionView;
@end
