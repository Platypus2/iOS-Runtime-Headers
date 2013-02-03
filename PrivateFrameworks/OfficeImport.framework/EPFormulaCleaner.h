/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDFormula, EDName, EDRowBlocks, EDSheet;

@interface EPFormulaCleaner : EDProcessor {
    EDRowBlocks *mBaseFormulaRowBlocks;
    int mColumnOffset;
    EDSheet *mCurrentSheet;
    EDFormula *mFormula;
    EDName *mParentName;
    int mRowOffset;
    EDFormula *mTokensToClean;
}

- (void)addOffsetsToRow:(int*)arg1 rowRelative:(bool)arg2 column:(int*)arg3 columnRelative:(bool)arg4;
- (void)applyMaxCellsInName:(id)arg1;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (bool)checkCustomFunction:(unsigned int)arg1;
- (bool)checkFunctionId:(int)arg1 tokenIndex:(unsigned int)arg2;
- (bool)checkSupportedAddInName:(id)arg1 externalLink:(bool)arg2;
- (bool)cleanArea3D:(unsigned int)arg1;
- (bool)cleanArea:(unsigned int)arg1;
- (bool)cleanArray:(unsigned int)arg1;
- (void)cleanFormula:(id)arg1 name:(id)arg2;
- (void)cleanFormula:(id)arg1 sheet:(id)arg2 name:(id)arg3;
- (void)cleanFormula:(id)arg1 sheet:(id)arg2;
- (bool)cleanFunc:(unsigned int)arg1;
- (bool)cleanFuncVar:(unsigned int)arg1;
- (bool)cleanName:(unsigned int)arg1 nameIndex:(unsigned int)arg2 sheetIndex:(unsigned int)arg3;
- (bool)cleanName:(unsigned int)arg1;
- (bool)cleanNameX:(unsigned int)arg1;
- (bool)cleanRange:(unsigned int)arg1 removedTokenCount:(unsigned int*)arg2;
- (bool)cleanRef3D:(unsigned int)arg1;
- (bool)cleanRef:(unsigned int)arg1;
- (bool)cleanTokenAtIndex:(unsigned int)arg1 removedTokenCount:(unsigned int*)arg2;
- (bool)cleanUnion:(unsigned int)arg1;
- (bool)combineCellReferences:(unsigned int)arg1 removedTokenCount:(unsigned int*)arg2;
- (void)dealloc;
- (id)extractFormulaToCleanFromSharedFormula:(id)arg1;
- (bool)isLinkReferenceIndexSupported:(unsigned int)arg1 allowExternal:(bool)arg2;
- (bool)isObjectSupported:(id)arg1;
- (bool)isReferenceValidInLassoForRow:(int)arg1 rowRelative:(bool)arg2 column:(int)arg3 columnRelative:(bool)arg4;
- (bool)isReferenceValidInLassoForSheet:(id)arg1 rowMin:(int)arg2 rowMinRelative:(bool)arg3 rowMax:(int)arg4 rowMaxRelative:(bool)arg5 columnMin:(int)arg6 columnMinRelative:(bool)arg7 columnMax:(int)arg8 columnMaxRelative:(bool)arg9;
- (void)prepareToProcessFormula:(id)arg1 sheet:(id)arg2 name:(id)arg3;
- (void)reportWarning:(int)arg1 parameter:(id)arg2;
- (void)reportWarning:(int)arg1;
- (void)reset;
- (void)updateSheet:(id)arg1 row:(int)arg2 rowRelative:(bool)arg3 column:(int)arg4 columnRelative:(bool)arg5;
- (void)updateSheet:(id)arg1 rowMin:(int)arg2 rowMinRelative:(bool)arg3 rowMax:(int)arg4 rowMaxRelative:(bool)arg5 columnMin:(int)arg6 columnMinRelative:(bool)arg7 columnMax:(int)arg8 columnMaxRelative:(bool)arg9;
- (void)updateWorksheet:(id)arg1 row:(int)arg2 column:(int)arg3 inDictionary:(id)arg4;
- (bool)useEvaluationStackToCheckFunctionId:(int)arg1 functionName:(id)arg2 tokenIndex:(unsigned int)arg3;
- (id)useEvaluationStackToGetParameter:(unsigned int)arg1 tokenIndex:(unsigned int)arg2 allReferencesAllowed:(bool)arg3 success:(bool*)arg4;
- (unsigned int)useEvaluationStackToGetParameter:(unsigned int)arg1 tokenIndex:(unsigned int)arg2;
- (id)worksheetFromLinkReferenceIndex:(unsigned int)arg1 loadIfNeeded:(bool)arg2;

@end
