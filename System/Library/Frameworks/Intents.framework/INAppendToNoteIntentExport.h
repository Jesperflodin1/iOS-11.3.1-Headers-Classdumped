/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INNote, INNoteContent;


@protocol INAppendToNoteIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INNote * targetNote; 
@property (nonatomic,copy) INNoteContent * content; 
@required
-(void)setContent:(id)arg1;
-(id)init;
-(INNoteContent *)content;
-(void)setTargetNote:(id)arg1;
-(INNote *)targetNote;

@end

