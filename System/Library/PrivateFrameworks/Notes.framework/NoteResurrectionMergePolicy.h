/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSMergePolicy.h>

@interface NoteResurrectionMergePolicy : NSMergePolicy
+(id)sharedNoteResurrectionMergePolicy;
-(BOOL)resolveConflicts:(id)arg1 error:(id*)arg2 ;
-(id)snapshotFromRecord:(id)arg1 ;
-(id)localStoreForNote:(id)arg1 ;
-(BOOL)accountExists:(id)arg1 ;
@end

