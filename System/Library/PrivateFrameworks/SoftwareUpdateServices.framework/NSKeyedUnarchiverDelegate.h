/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSKeyedUnarchiverDelegate <NSObject>
@optional
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
-(void)unarchiver:(id)arg1 willReplaceObject:(id)arg2 withObject:(id)arg3;
-(void)unarchiverWillFinish:(id)arg1;
-(void)unarchiverDidFinish:(id)arg1;

@end

