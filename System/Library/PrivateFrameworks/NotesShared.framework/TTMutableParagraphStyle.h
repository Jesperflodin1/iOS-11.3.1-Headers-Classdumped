/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/TTParagraphStyle.h>

@class TTTodo;

@interface TTMutableParagraphStyle : TTParagraphStyle

@property (assign,nonatomic) unsigned style; 
@property (assign,nonatomic) long long alignment; 
@property (assign,nonatomic) long long writingDirection; 
@property (assign,nonatomic) unsigned long long indent; 
@property (assign,nonatomic) unsigned long long startingItemNumber; 
@property (nonatomic,retain) TTTodo * todo; 
@property (assign,nonatomic) unsigned hints; 
@property (assign,nonatomic) BOOL needsParagraphCleanup; 
@property (assign,nonatomic) BOOL needsListCleanup; 
+(id)paragraphStyleNamed:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
