//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DfMidiEventCreator : NSObject
{
}

+ (void)createControllerEventInDocument:(id)arg1 folderID:(int)arg2 atClock:(long long)arg3 controller:(CDStruct_5115be14)arg4 value:(long long)arg5 makeUndo:(_Bool)arg6;
+ (void)createNoteEventInDocument:(id)arg1 folderID:(int)arg2 atClock:(long long)arg3 withLength:(long long)arg4 note:(unsigned char)arg5 velocity:(unsigned char)arg6 makeUndo:(_Bool)arg7;

@end

