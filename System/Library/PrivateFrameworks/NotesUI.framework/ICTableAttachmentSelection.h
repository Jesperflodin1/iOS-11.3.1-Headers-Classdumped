/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesUI/NotesUI-Structs.h>
@class NSArray;

@interface ICTableAttachmentSelection : NSObject {

	BOOL _moving;
	BOOL _draggingText;
	unsigned long long _type;
	NSArray* _columns;
	NSArray* _rows;

}

@property (assign,nonatomic) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * columns;                                //@synthesize columns=_columns - In the implementation block
@property (nonatomic,copy) NSArray * rows;                                   //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) BOOL isRangeOrSpanningSelection; 
@property (assign,nonatomic) BOOL moving;                                    //@synthesize moving=_moving - In the implementation block
@property (assign,nonatomic) BOOL draggingText;                              //@synthesize draggingText=_draggingText - In the implementation block
@property (nonatomic,readonly) BOOL valid; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)rows;
-(void)unselect;
-(BOOL)valid;
-(void)setRows:(NSArray *)arg1 ;
-(NSArray *)columns;
-(void)setColumns:(NSArray *)arg1 ;
-(void)selectCellAtColumn:(id)arg1 row:(id)arg2 ;
-(BOOL)moving;
-(void)setMoving:(BOOL)arg1 ;
-(BOOL)draggingText;
-(void)setDraggingText:(BOOL)arg1 ;
-(BOOL)removeColumns:(id)arg1 rows:(id)arg2 previousColumns:(id)arg3 previousRows:(id)arg4 ;
-(BOOL)isRangeOrSpanningSelection;
-(void)selectColumns:(id)arg1 ;
-(void)selectRows:(id)arg1 ;
-(void)selectCellRangeAtColumns:(id)arg1 rows:(id)arg2 ;
-(void)setSelectionEqualTo:(id)arg1 ;
-(BOOL)removeColumns:(id)arg1 rows:(id)arg2 ;
@end

