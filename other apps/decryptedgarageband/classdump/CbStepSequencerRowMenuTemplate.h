//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbStepSequencerMenuBaseTemplate.h"

@interface CbStepSequencerRowMenuTemplate : CbStepSequencerMenuBaseTemplate
{
    CDUnknownBlockType _rowMutedBlock;
    CDUnknownBlockType _copiedBlock;
    CDUnknownBlockType _resetEnabledBlock;
    CDUnknownBlockType _editModeBlock;
    CDUnknownBlockType _detailTextBlock;
    CDUnknownBlockType _selectionBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType selectionBlock; // @synthesize selectionBlock=_selectionBlock;
- (void).cxx_destruct;
- (void)reloadValues;
- (id)textForRandomizeOption;
- (_Bool)chevronHiddenForIndexPath:(id)arg1;
- (id)menuTextForOption:(unsigned long long)arg1;
- (id)title;
- (unsigned long long)menuOptionForIndexPath:(id)arg1;
- (CDUnknownBlockType)cellSelectionBlock;
- (_Bool)hasBottomLinePaddingForIndexPath:(id)arg1;
- (unsigned long long)textAlignmentForIndexPath:(id)arg1;
- (id)textColorForIndexPath:(id)arg1;
- (id)detailTextForIndexPath:(id)arg1;
- (id)textForIndexPath:(id)arg1;
- (id)initWithRowMutedBlock:(CDUnknownBlockType)arg1 copiedBlock:(CDUnknownBlockType)arg2 editModeBlock:(CDUnknownBlockType)arg3 resetEnabledBlock:(CDUnknownBlockType)arg4 selectionBlock:(CDUnknownBlockType)arg5 detailTextBlock:(CDUnknownBlockType)arg6;

@end
