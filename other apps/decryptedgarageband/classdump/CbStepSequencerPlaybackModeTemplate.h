//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbStepSequencerMenuBaseTemplate.h"

@interface CbStepSequencerPlaybackModeTemplate : CbStepSequencerMenuBaseTemplate
{
    CDUnknownBlockType _selectedBlock;
    CDUnknownBlockType _selectionBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType selectionBlock; // @synthesize selectionBlock=_selectionBlock;
@property(readonly, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
- (void).cxx_destruct;
- (id)title;
- (_Bool)shouldNopSelectionForSelectedCell;
- (unsigned long long)playbackModeForIndexPath:(id)arg1;
- (CDUnknownBlockType)cellSelectionBlock;
- (CDUnknownBlockType)cellIsSelectedBlock;
- (id)textForIndexPath:(id)arg1;
- (id)initWithSelectedBlock:(CDUnknownBlockType)arg1 selectionBlock:(CDUnknownBlockType)arg2;

@end

