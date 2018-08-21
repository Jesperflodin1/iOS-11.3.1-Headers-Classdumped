/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTCellDiffing.h>
#import <iWorkImport/TSSPropertyCommandSerializing.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSDStroke, NSString;

@interface TSTCellBorder : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing, NSCopying> {

	TSDStroke* _topStroke;
	int _topStrokeOrder;
	TSDStroke* _rightStroke;
	int _rightStrokeOrder;
	TSDStroke* _bottomStroke;
	int _bottomStrokeOrder;
	TSDStroke* _leftStroke;
	int _leftStrokeOrder;
	BOOL _definedTopStroke;
	BOOL _definedTopStrokeOrder;
	BOOL _definedRightStroke;
	BOOL _definedRightStrokeOrder;
	BOOL _definedBottomStroke;
	BOOL _definedBottomStrokeOrder;
	BOOL _definedLeftStroke;
	BOOL _definedLeftStrokeOrder;

}

@property (nonatomic,readonly) BOOL definedTopStroke;                        //@synthesize definedTopStroke=_definedTopStroke - In the implementation block
@property (nonatomic,readonly) BOOL definedLeftStroke;                       //@synthesize definedLeftStroke=_definedLeftStroke - In the implementation block
@property (nonatomic,readonly) BOOL definedBottomStroke;                     //@synthesize definedBottomStroke=_definedBottomStroke - In the implementation block
@property (nonatomic,readonly) BOOL definedRightStroke;                      //@synthesize definedRightStroke=_definedRightStroke - In the implementation block
@property (nonatomic,retain,readonly) TSDStroke * topStroke;                 //@synthesize topStroke=_topStroke - In the implementation block
@property (nonatomic,readonly) int topStrokeOrder;                           //@synthesize topStrokeOrder=_topStrokeOrder - In the implementation block
@property (nonatomic,retain,readonly) TSDStroke * leftStroke;                //@synthesize leftStroke=_leftStroke - In the implementation block
@property (nonatomic,readonly) int leftStrokeOrder;                          //@synthesize leftStrokeOrder=_leftStrokeOrder - In the implementation block
@property (nonatomic,retain,readonly) TSDStroke * bottomStroke;              //@synthesize bottomStroke=_bottomStroke - In the implementation block
@property (nonatomic,readonly) int bottomStrokeOrder;                        //@synthesize bottomStrokeOrder=_bottomStrokeOrder - In the implementation block
@property (nonatomic,retain,readonly) TSDStroke * rightStroke;               //@synthesize rightStroke=_rightStroke - In the implementation block
@property (nonatomic,readonly) int rightStrokeOrder;                         //@synthesize rightStrokeOrder=_rightStrokeOrder - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellBorder;
+(id)cellDiffProperties;
+(id)cellBorderForResettingAllStrokes;
-(void)saveToMessage:(CellBorderArchive*)arg1 archiver:(id)arg2 ;
-(void)didInitFromSOS;
-(id)initFromMessage:(const CellBorderArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initFromPropertyCommandMessage:(const Message*)arg1 unarchiver:(id)arg2 ;
-(void)saveToPropertyCommandMessage:(Message*)arg1 archiver:(id)arg2 ;
-(int)topStrokeOrder;
-(void)setTopStroke:(id)arg1 order:(int)arg2 ;
-(int)leftStrokeOrder;
-(void)setLeftStroke:(id)arg1 order:(int)arg2 ;
-(int)bottomStrokeOrder;
-(void)setBottomStroke:(id)arg1 order:(int)arg2 ;
-(int)rightStrokeOrder;
-(void)setRightStroke:(id)arg1 order:(int)arg2 ;
-(id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4 ;
-(void)applyToCell:(id)arg1 ;
-(void)_clearTopStroke;
-(void)_clearLeftStroke;
-(void)_clearBottomStroke;
-(void)_clearRightStroke;
-(BOOL)definedTopStroke;
-(BOOL)definedLeftStroke;
-(BOOL)definedBottomStroke;
-(BOOL)definedRightStroke;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(TSDStroke *)topStroke;
-(TSDStroke *)bottomStroke;
-(TSDStroke *)leftStroke;
-(TSDStroke *)rightStroke;
@end

