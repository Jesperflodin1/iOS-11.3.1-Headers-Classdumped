/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface TCColorPalettizer : NSObject {

	tagOctree* m_pTree;
	BOOL isDefaultPaletteSize;

}
-(void)dealloc;
-(int)createOctree:(tagOctree*)arg1 maxPaletteSize:(unsigned short)arg2 ;
-(int)deleteOctree:(tagOctree*)arg1 ;
-(BOOL)addQuadColor:(tagRgbQuad)arg1 ;
-(int)addPixelToOctree:(tagOctree*)arg1 pixel:(tagRgbQuad)arg2 ;
-(int)reduceOctree:(tagOctree*)arg1 ;
-(unsigned short)getPaletteFromOctree:(tagOctreeNode*)arg1 paletteEntry:(tagRgbQuad*)arg2 index:(unsigned short)arg3 ;
-(int)paletteIndexFromQuadColor:(tagRgbQuad)arg1 ;
-(int)rgbToIndexOctree:(tagOctree*)arg1 source:(tagRgbQuad)arg2 destination:(char*)arg3 ;
-(id)initWitMaxPaletteSize:(unsigned)arg1 ;
-(id)initWitDefaultPaletteSize;
-(BOOL)addTSUColor:(id)arg1 ;
-(void)createPalette;
-(unsigned)paletteColorCount;
-(id)getPaletteDataRaw;
-(id)getPngPaletteData;
-(id)getPaletteData;
-(int)paletteIndexFromTSUColor:(id)arg1 ;
-(int)createNodeOctree:(tagOctreeNode*)arg1 parent:(tagOctreeNode*)arg2 ;
-(int)deleteNodeOctree:(tagOctreeNode*)arg1 ;
-(int)deleteListOctree:(tagLevelItem*)arg1 ;
@end

