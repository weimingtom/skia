#ifndef __DEFINED__SkPdfBlockLevelStructureElementsDictionary
#define __DEFINED__SkPdfBlockLevelStructureElementsDictionary

#include "SkPdfEnums_autogen.h"
#include "SkPdfArray_autogen.h"
#include "SkPdfDictionary_autogen.h"

// Additional standard layout attributes specific to block-level structure elements
class SkPdfBlockLevelStructureElementsDictionary : public SkPdfDictionary {
public:
  virtual SkPdfObjectType getType() const { return kBlockLevelStructureElementsDictionary_SkPdfObjectType;}
  virtual SkPdfObjectType getTypeEnd() const { return (SkPdfObjectType)(kBlockLevelStructureElementsDictionary_SkPdfObjectType + 1);}
public:
  virtual SkPdfBlockLevelStructureElementsDictionary* asBlockLevelStructureElementsDictionary() {return this;}
  virtual const SkPdfBlockLevelStructureElementsDictionary* asBlockLevelStructureElementsDictionary() const {return this;}

private:
  virtual SkPdfALinkAnnotationDictionary* asALinkAnnotationDictionary() {return NULL;}
  virtual const SkPdfALinkAnnotationDictionary* asALinkAnnotationDictionary() const {return NULL;}

  virtual SkPdfActionDictionary* asActionDictionary() {return NULL;}
  virtual const SkPdfActionDictionary* asActionDictionary() const {return NULL;}

  virtual SkPdfAlternateImageDictionary* asAlternateImageDictionary() {return NULL;}
  virtual const SkPdfAlternateImageDictionary* asAlternateImageDictionary() const {return NULL;}

  virtual SkPdfAnnotationActionsDictionary* asAnnotationActionsDictionary() {return NULL;}
  virtual const SkPdfAnnotationActionsDictionary* asAnnotationActionsDictionary() const {return NULL;}

  virtual SkPdfAnnotationDictionary* asAnnotationDictionary() {return NULL;}
  virtual const SkPdfAnnotationDictionary* asAnnotationDictionary() const {return NULL;}

  virtual SkPdfAppearanceCharacteristicsDictionary* asAppearanceCharacteristicsDictionary() {return NULL;}
  virtual const SkPdfAppearanceCharacteristicsDictionary* asAppearanceCharacteristicsDictionary() const {return NULL;}

  virtual SkPdfAppearanceDictionary* asAppearanceDictionary() {return NULL;}
  virtual const SkPdfAppearanceDictionary* asAppearanceDictionary() const {return NULL;}

  virtual SkPdfApplicationDataDictionary* asApplicationDataDictionary() {return NULL;}
  virtual const SkPdfApplicationDataDictionary* asApplicationDataDictionary() const {return NULL;}

  virtual SkPdfArtifactsDictionary* asArtifactsDictionary() {return NULL;}
  virtual const SkPdfArtifactsDictionary* asArtifactsDictionary() const {return NULL;}

  virtual SkPdfAttributeObjectDictionary* asAttributeObjectDictionary() {return NULL;}
  virtual const SkPdfAttributeObjectDictionary* asAttributeObjectDictionary() const {return NULL;}

  virtual SkPdfBeadDictionary* asBeadDictionary() {return NULL;}
  virtual const SkPdfBeadDictionary* asBeadDictionary() const {return NULL;}

  virtual SkPdfBorderStyleDictionary* asBorderStyleDictionary() {return NULL;}
  virtual const SkPdfBorderStyleDictionary* asBorderStyleDictionary() const {return NULL;}

  virtual SkPdfBoxColorInformationDictionary* asBoxColorInformationDictionary() {return NULL;}
  virtual const SkPdfBoxColorInformationDictionary* asBoxColorInformationDictionary() const {return NULL;}

  virtual SkPdfBoxStyleDictionary* asBoxStyleDictionary() {return NULL;}
  virtual const SkPdfBoxStyleDictionary* asBoxStyleDictionary() const {return NULL;}

  virtual SkPdfCIDFontDescriptorDictionary* asCIDFontDescriptorDictionary() {return NULL;}
  virtual const SkPdfCIDFontDescriptorDictionary* asCIDFontDescriptorDictionary() const {return NULL;}

  virtual SkPdfCIDSystemInfoDictionary* asCIDSystemInfoDictionary() {return NULL;}
  virtual const SkPdfCIDSystemInfoDictionary* asCIDSystemInfoDictionary() const {return NULL;}

  virtual SkPdfCMapDictionary* asCMapDictionary() {return NULL;}
  virtual const SkPdfCMapDictionary* asCMapDictionary() const {return NULL;}

  virtual SkPdfCalgrayColorSpaceDictionary* asCalgrayColorSpaceDictionary() {return NULL;}
  virtual const SkPdfCalgrayColorSpaceDictionary* asCalgrayColorSpaceDictionary() const {return NULL;}

  virtual SkPdfCalrgbColorSpaceDictionary* asCalrgbColorSpaceDictionary() {return NULL;}
  virtual const SkPdfCalrgbColorSpaceDictionary* asCalrgbColorSpaceDictionary() const {return NULL;}

  virtual SkPdfCatalogDictionary* asCatalogDictionary() {return NULL;}
  virtual const SkPdfCatalogDictionary* asCatalogDictionary() const {return NULL;}

  virtual SkPdfCcittfaxdecodeFilterDictionary* asCcittfaxdecodeFilterDictionary() {return NULL;}
  virtual const SkPdfCcittfaxdecodeFilterDictionary* asCcittfaxdecodeFilterDictionary() const {return NULL;}

  virtual SkPdfCheckboxFieldDictionary* asCheckboxFieldDictionary() {return NULL;}
  virtual const SkPdfCheckboxFieldDictionary* asCheckboxFieldDictionary() const {return NULL;}

  virtual SkPdfChoiceFieldDictionary* asChoiceFieldDictionary() {return NULL;}
  virtual const SkPdfChoiceFieldDictionary* asChoiceFieldDictionary() const {return NULL;}

  virtual SkPdfComponentsWithMetadataDictionary* asComponentsWithMetadataDictionary() {return NULL;}
  virtual const SkPdfComponentsWithMetadataDictionary* asComponentsWithMetadataDictionary() const {return NULL;}

  virtual SkPdfDctdecodeFilterDictionary* asDctdecodeFilterDictionary() {return NULL;}
  virtual const SkPdfDctdecodeFilterDictionary* asDctdecodeFilterDictionary() const {return NULL;}

  virtual SkPdfDeviceNColorSpaceDictionary* asDeviceNColorSpaceDictionary() {return NULL;}
  virtual const SkPdfDeviceNColorSpaceDictionary* asDeviceNColorSpaceDictionary() const {return NULL;}

  virtual SkPdfDocumentCatalogActionsDictionary* asDocumentCatalogActionsDictionary() {return NULL;}
  virtual const SkPdfDocumentCatalogActionsDictionary* asDocumentCatalogActionsDictionary() const {return NULL;}

  virtual SkPdfDocumentInformationDictionary* asDocumentInformationDictionary() {return NULL;}
  virtual const SkPdfDocumentInformationDictionary* asDocumentInformationDictionary() const {return NULL;}

  virtual SkPdfEmbeddedFileParameterDictionary* asEmbeddedFileParameterDictionary() {return NULL;}
  virtual const SkPdfEmbeddedFileParameterDictionary* asEmbeddedFileParameterDictionary() const {return NULL;}

  virtual SkPdfEmbeddedFileStreamDictionary* asEmbeddedFileStreamDictionary() {return NULL;}
  virtual const SkPdfEmbeddedFileStreamDictionary* asEmbeddedFileStreamDictionary() const {return NULL;}

  virtual SkPdfEmbeddedFontStreamDictionary* asEmbeddedFontStreamDictionary() {return NULL;}
  virtual const SkPdfEmbeddedFontStreamDictionary* asEmbeddedFontStreamDictionary() const {return NULL;}

  virtual SkPdfEncodingDictionary* asEncodingDictionary() {return NULL;}
  virtual const SkPdfEncodingDictionary* asEncodingDictionary() const {return NULL;}

  virtual SkPdfEncryptedEmbeddedFileStreamDictionary* asEncryptedEmbeddedFileStreamDictionary() {return NULL;}
  virtual const SkPdfEncryptedEmbeddedFileStreamDictionary* asEncryptedEmbeddedFileStreamDictionary() const {return NULL;}

  virtual SkPdfEncryptionCommonDictionary* asEncryptionCommonDictionary() {return NULL;}
  virtual const SkPdfEncryptionCommonDictionary* asEncryptionCommonDictionary() const {return NULL;}

  virtual SkPdfFDFCatalogDictionary* asFDFCatalogDictionary() {return NULL;}
  virtual const SkPdfFDFCatalogDictionary* asFDFCatalogDictionary() const {return NULL;}

  virtual SkPdfFDFDictionary* asFDFDictionary() {return NULL;}
  virtual const SkPdfFDFDictionary* asFDFDictionary() const {return NULL;}

  virtual SkPdfFDFFieldDictionary* asFDFFieldDictionary() {return NULL;}
  virtual const SkPdfFDFFieldDictionary* asFDFFieldDictionary() const {return NULL;}

  virtual SkPdfFDFFileAnnotationDictionary* asFDFFileAnnotationDictionary() {return NULL;}
  virtual const SkPdfFDFFileAnnotationDictionary* asFDFFileAnnotationDictionary() const {return NULL;}

  virtual SkPdfFDFNamedPageReferenceDictionary* asFDFNamedPageReferenceDictionary() {return NULL;}
  virtual const SkPdfFDFNamedPageReferenceDictionary* asFDFNamedPageReferenceDictionary() const {return NULL;}

  virtual SkPdfFDFPageDictionary* asFDFPageDictionary() {return NULL;}
  virtual const SkPdfFDFPageDictionary* asFDFPageDictionary() const {return NULL;}

  virtual SkPdfFDFTemplateDictionary* asFDFTemplateDictionary() {return NULL;}
  virtual const SkPdfFDFTemplateDictionary* asFDFTemplateDictionary() const {return NULL;}

  virtual SkPdfFDFTrailerDictionary* asFDFTrailerDictionary() {return NULL;}
  virtual const SkPdfFDFTrailerDictionary* asFDFTrailerDictionary() const {return NULL;}

  virtual SkPdfFieldDictionary* asFieldDictionary() {return NULL;}
  virtual const SkPdfFieldDictionary* asFieldDictionary() const {return NULL;}

  virtual SkPdfFileAttachmentAnnotationDictionary* asFileAttachmentAnnotationDictionary() {return NULL;}
  virtual const SkPdfFileAttachmentAnnotationDictionary* asFileAttachmentAnnotationDictionary() const {return NULL;}

  virtual SkPdfFileSpecificationDictionary* asFileSpecificationDictionary() {return NULL;}
  virtual const SkPdfFileSpecificationDictionary* asFileSpecificationDictionary() const {return NULL;}

  virtual SkPdfFileTrailerDictionary* asFileTrailerDictionary() {return NULL;}
  virtual const SkPdfFileTrailerDictionary* asFileTrailerDictionary() const {return NULL;}

  virtual SkPdfFontDescriptorDictionary* asFontDescriptorDictionary() {return NULL;}
  virtual const SkPdfFontDescriptorDictionary* asFontDescriptorDictionary() const {return NULL;}

  virtual SkPdfFontDictionary* asFontDictionary() {return NULL;}
  virtual const SkPdfFontDictionary* asFontDictionary() const {return NULL;}

  virtual SkPdfCIDFontDictionary* asCIDFontDictionary() {return NULL;}
  virtual const SkPdfCIDFontDictionary* asCIDFontDictionary() const {return NULL;}

  virtual SkPdfTrueTypeFontDictionary* asTrueTypeFontDictionary() {return NULL;}
  virtual const SkPdfTrueTypeFontDictionary* asTrueTypeFontDictionary() const {return NULL;}

  virtual SkPdfType0FontDictionary* asType0FontDictionary() {return NULL;}
  virtual const SkPdfType0FontDictionary* asType0FontDictionary() const {return NULL;}

  virtual SkPdfType1FontDictionary* asType1FontDictionary() {return NULL;}
  virtual const SkPdfType1FontDictionary* asType1FontDictionary() const {return NULL;}

  virtual SkPdfMultiMasterFontDictionary* asMultiMasterFontDictionary() {return NULL;}
  virtual const SkPdfMultiMasterFontDictionary* asMultiMasterFontDictionary() const {return NULL;}

  virtual SkPdfType3FontDictionary* asType3FontDictionary() {return NULL;}
  virtual const SkPdfType3FontDictionary* asType3FontDictionary() const {return NULL;}

  virtual SkPdfFormFieldActionsDictionary* asFormFieldActionsDictionary() {return NULL;}
  virtual const SkPdfFormFieldActionsDictionary* asFormFieldActionsDictionary() const {return NULL;}

  virtual SkPdfFreeTextAnnotationDictionary* asFreeTextAnnotationDictionary() {return NULL;}
  virtual const SkPdfFreeTextAnnotationDictionary* asFreeTextAnnotationDictionary() const {return NULL;}

  virtual SkPdfFunctionCommonDictionary* asFunctionCommonDictionary() {return NULL;}
  virtual const SkPdfFunctionCommonDictionary* asFunctionCommonDictionary() const {return NULL;}

  virtual SkPdfGoToActionDictionary* asGoToActionDictionary() {return NULL;}
  virtual const SkPdfGoToActionDictionary* asGoToActionDictionary() const {return NULL;}

  virtual SkPdfGraphicsStateDictionary* asGraphicsStateDictionary() {return NULL;}
  virtual const SkPdfGraphicsStateDictionary* asGraphicsStateDictionary() const {return NULL;}

  virtual SkPdfGroupAttributesDictionary* asGroupAttributesDictionary() {return NULL;}
  virtual const SkPdfGroupAttributesDictionary* asGroupAttributesDictionary() const {return NULL;}

  virtual SkPdfHideActionDictionary* asHideActionDictionary() {return NULL;}
  virtual const SkPdfHideActionDictionary* asHideActionDictionary() const {return NULL;}

  virtual SkPdfIccProfileStreamDictionary* asIccProfileStreamDictionary() {return NULL;}
  virtual const SkPdfIccProfileStreamDictionary* asIccProfileStreamDictionary() const {return NULL;}

  virtual SkPdfIconFitDictionary* asIconFitDictionary() {return NULL;}
  virtual const SkPdfIconFitDictionary* asIconFitDictionary() const {return NULL;}

  virtual SkPdfImportDataActionDictionary* asImportDataActionDictionary() {return NULL;}
  virtual const SkPdfImportDataActionDictionary* asImportDataActionDictionary() const {return NULL;}

  virtual SkPdfInkAnnotationDictionary* asInkAnnotationDictionary() {return NULL;}
  virtual const SkPdfInkAnnotationDictionary* asInkAnnotationDictionary() const {return NULL;}

  virtual SkPdfInlineLevelStructureElementsDictionary* asInlineLevelStructureElementsDictionary() {return NULL;}
  virtual const SkPdfInlineLevelStructureElementsDictionary* asInlineLevelStructureElementsDictionary() const {return NULL;}

  virtual SkPdfInteractiveFormDictionary* asInteractiveFormDictionary() {return NULL;}
  virtual const SkPdfInteractiveFormDictionary* asInteractiveFormDictionary() const {return NULL;}

  virtual SkPdfJavascriptActionDictionary* asJavascriptActionDictionary() {return NULL;}
  virtual const SkPdfJavascriptActionDictionary* asJavascriptActionDictionary() const {return NULL;}

  virtual SkPdfJavascriptDictionary* asJavascriptDictionary() {return NULL;}
  virtual const SkPdfJavascriptDictionary* asJavascriptDictionary() const {return NULL;}

  virtual SkPdfJbig2DecodeFilterDictionary* asJbig2DecodeFilterDictionary() {return NULL;}
  virtual const SkPdfJbig2DecodeFilterDictionary* asJbig2DecodeFilterDictionary() const {return NULL;}

  virtual SkPdfLabColorSpaceDictionary* asLabColorSpaceDictionary() {return NULL;}
  virtual const SkPdfLabColorSpaceDictionary* asLabColorSpaceDictionary() const {return NULL;}

  virtual SkPdfLaunchActionDictionary* asLaunchActionDictionary() {return NULL;}
  virtual const SkPdfLaunchActionDictionary* asLaunchActionDictionary() const {return NULL;}

  virtual SkPdfLineAnnotationDictionary* asLineAnnotationDictionary() {return NULL;}
  virtual const SkPdfLineAnnotationDictionary* asLineAnnotationDictionary() const {return NULL;}

  virtual SkPdfListAttributeDictionary* asListAttributeDictionary() {return NULL;}
  virtual const SkPdfListAttributeDictionary* asListAttributeDictionary() const {return NULL;}

  virtual SkPdfLzwdecodeAndFlatedecodeFiltersDictionary* asLzwdecodeAndFlatedecodeFiltersDictionary() {return NULL;}
  virtual const SkPdfLzwdecodeAndFlatedecodeFiltersDictionary* asLzwdecodeAndFlatedecodeFiltersDictionary() const {return NULL;}

  virtual SkPdfMacOsFileInformationDictionary* asMacOsFileInformationDictionary() {return NULL;}
  virtual const SkPdfMacOsFileInformationDictionary* asMacOsFileInformationDictionary() const {return NULL;}

  virtual SkPdfMarkInformationDictionary* asMarkInformationDictionary() {return NULL;}
  virtual const SkPdfMarkInformationDictionary* asMarkInformationDictionary() const {return NULL;}

  virtual SkPdfMarkedContentReferenceDictionary* asMarkedContentReferenceDictionary() {return NULL;}
  virtual const SkPdfMarkedContentReferenceDictionary* asMarkedContentReferenceDictionary() const {return NULL;}

  virtual SkPdfMarkupAnnotationsDictionary* asMarkupAnnotationsDictionary() {return NULL;}
  virtual const SkPdfMarkupAnnotationsDictionary* asMarkupAnnotationsDictionary() const {return NULL;}

  virtual SkPdfMetadataStreamDictionary* asMetadataStreamDictionary() {return NULL;}
  virtual const SkPdfMetadataStreamDictionary* asMetadataStreamDictionary() const {return NULL;}

  virtual SkPdfMovieActionDictionary* asMovieActionDictionary() {return NULL;}
  virtual const SkPdfMovieActionDictionary* asMovieActionDictionary() const {return NULL;}

  virtual SkPdfMovieActivationDictionary* asMovieActivationDictionary() {return NULL;}
  virtual const SkPdfMovieActivationDictionary* asMovieActivationDictionary() const {return NULL;}

  virtual SkPdfMovieAnnotationDictionary* asMovieAnnotationDictionary() {return NULL;}
  virtual const SkPdfMovieAnnotationDictionary* asMovieAnnotationDictionary() const {return NULL;}

  virtual SkPdfMovieDictionary* asMovieDictionary() {return NULL;}
  virtual const SkPdfMovieDictionary* asMovieDictionary() const {return NULL;}

  virtual SkPdfNameDictionary* asNameDictionary() {return NULL;}
  virtual const SkPdfNameDictionary* asNameDictionary() const {return NULL;}

  virtual SkPdfNameTreeNodeDictionary* asNameTreeNodeDictionary() {return NULL;}
  virtual const SkPdfNameTreeNodeDictionary* asNameTreeNodeDictionary() const {return NULL;}

  virtual SkPdfNamedActionsDictionary* asNamedActionsDictionary() {return NULL;}
  virtual const SkPdfNamedActionsDictionary* asNamedActionsDictionary() const {return NULL;}

  virtual SkPdfNumberTreeNodeDictionary* asNumberTreeNodeDictionary() {return NULL;}
  virtual const SkPdfNumberTreeNodeDictionary* asNumberTreeNodeDictionary() const {return NULL;}

  virtual SkPdfObjectReferenceDictionary* asObjectReferenceDictionary() {return NULL;}
  virtual const SkPdfObjectReferenceDictionary* asObjectReferenceDictionary() const {return NULL;}

  virtual SkPdfOpiVersionDictionary* asOpiVersionDictionary() {return NULL;}
  virtual const SkPdfOpiVersionDictionary* asOpiVersionDictionary() const {return NULL;}

  virtual SkPdfOutlineDictionary* asOutlineDictionary() {return NULL;}
  virtual const SkPdfOutlineDictionary* asOutlineDictionary() const {return NULL;}

  virtual SkPdfOutlineItemDictionary* asOutlineItemDictionary() {return NULL;}
  virtual const SkPdfOutlineItemDictionary* asOutlineItemDictionary() const {return NULL;}

  virtual SkPdfPDF_XOutputIntentDictionary* asPDF_XOutputIntentDictionary() {return NULL;}
  virtual const SkPdfPDF_XOutputIntentDictionary* asPDF_XOutputIntentDictionary() const {return NULL;}

  virtual SkPdfPSXobjectDictionary* asPSXobjectDictionary() {return NULL;}
  virtual const SkPdfPSXobjectDictionary* asPSXobjectDictionary() const {return NULL;}

  virtual SkPdfPageLabelDictionary* asPageLabelDictionary() {return NULL;}
  virtual const SkPdfPageLabelDictionary* asPageLabelDictionary() const {return NULL;}

  virtual SkPdfPageObjectActionsDictionary* asPageObjectActionsDictionary() {return NULL;}
  virtual const SkPdfPageObjectActionsDictionary* asPageObjectActionsDictionary() const {return NULL;}

  virtual SkPdfPageObjectDictionary* asPageObjectDictionary() {return NULL;}
  virtual const SkPdfPageObjectDictionary* asPageObjectDictionary() const {return NULL;}

  virtual SkPdfPagePieceDictionary* asPagePieceDictionary() {return NULL;}
  virtual const SkPdfPagePieceDictionary* asPagePieceDictionary() const {return NULL;}

  virtual SkPdfPageTreeNodeDictionary* asPageTreeNodeDictionary() {return NULL;}
  virtual const SkPdfPageTreeNodeDictionary* asPageTreeNodeDictionary() const {return NULL;}

  virtual SkPdfPopUpAnnotationDictionary* asPopUpAnnotationDictionary() {return NULL;}
  virtual const SkPdfPopUpAnnotationDictionary* asPopUpAnnotationDictionary() const {return NULL;}

  virtual SkPdfPrinterMarkAnnotationDictionary* asPrinterMarkAnnotationDictionary() {return NULL;}
  virtual const SkPdfPrinterMarkAnnotationDictionary* asPrinterMarkAnnotationDictionary() const {return NULL;}

  virtual SkPdfPrinterMarkFormDictionary* asPrinterMarkFormDictionary() {return NULL;}
  virtual const SkPdfPrinterMarkFormDictionary* asPrinterMarkFormDictionary() const {return NULL;}

  virtual SkPdfRadioButtonFieldDictionary* asRadioButtonFieldDictionary() {return NULL;}
  virtual const SkPdfRadioButtonFieldDictionary* asRadioButtonFieldDictionary() const {return NULL;}

  virtual SkPdfReferenceDictionary* asReferenceDictionary() {return NULL;}
  virtual const SkPdfReferenceDictionary* asReferenceDictionary() const {return NULL;}

  virtual SkPdfRemoteGoToActionDictionary* asRemoteGoToActionDictionary() {return NULL;}
  virtual const SkPdfRemoteGoToActionDictionary* asRemoteGoToActionDictionary() const {return NULL;}

  virtual SkPdfResetFormActionDictionary* asResetFormActionDictionary() {return NULL;}
  virtual const SkPdfResetFormActionDictionary* asResetFormActionDictionary() const {return NULL;}

  virtual SkPdfResourceDictionary* asResourceDictionary() {return NULL;}
  virtual const SkPdfResourceDictionary* asResourceDictionary() const {return NULL;}

  virtual SkPdfRubberStampAnnotationDictionary* asRubberStampAnnotationDictionary() {return NULL;}
  virtual const SkPdfRubberStampAnnotationDictionary* asRubberStampAnnotationDictionary() const {return NULL;}

  virtual SkPdfSeparationDictionary* asSeparationDictionary() {return NULL;}
  virtual const SkPdfSeparationDictionary* asSeparationDictionary() const {return NULL;}

  virtual SkPdfShadingDictionary* asShadingDictionary() {return NULL;}
  virtual const SkPdfShadingDictionary* asShadingDictionary() const {return NULL;}

  virtual SkPdfType1ShadingDictionary* asType1ShadingDictionary() {return NULL;}
  virtual const SkPdfType1ShadingDictionary* asType1ShadingDictionary() const {return NULL;}

  virtual SkPdfType2ShadingDictionary* asType2ShadingDictionary() {return NULL;}
  virtual const SkPdfType2ShadingDictionary* asType2ShadingDictionary() const {return NULL;}

  virtual SkPdfType3ShadingDictionary* asType3ShadingDictionary() {return NULL;}
  virtual const SkPdfType3ShadingDictionary* asType3ShadingDictionary() const {return NULL;}

  virtual SkPdfType4ShadingDictionary* asType4ShadingDictionary() {return NULL;}
  virtual const SkPdfType4ShadingDictionary* asType4ShadingDictionary() const {return NULL;}

  virtual SkPdfType5ShadingDictionary* asType5ShadingDictionary() {return NULL;}
  virtual const SkPdfType5ShadingDictionary* asType5ShadingDictionary() const {return NULL;}

  virtual SkPdfType6ShadingDictionary* asType6ShadingDictionary() {return NULL;}
  virtual const SkPdfType6ShadingDictionary* asType6ShadingDictionary() const {return NULL;}

  virtual SkPdfSignatureDictionary* asSignatureDictionary() {return NULL;}
  virtual const SkPdfSignatureDictionary* asSignatureDictionary() const {return NULL;}

  virtual SkPdfSoftMaskDictionary* asSoftMaskDictionary() {return NULL;}
  virtual const SkPdfSoftMaskDictionary* asSoftMaskDictionary() const {return NULL;}

  virtual SkPdfSoftMaskImageDictionary* asSoftMaskImageDictionary() {return NULL;}
  virtual const SkPdfSoftMaskImageDictionary* asSoftMaskImageDictionary() const {return NULL;}

  virtual SkPdfSoundActionDictionary* asSoundActionDictionary() {return NULL;}
  virtual const SkPdfSoundActionDictionary* asSoundActionDictionary() const {return NULL;}

  virtual SkPdfSoundAnnotationDictionary* asSoundAnnotationDictionary() {return NULL;}
  virtual const SkPdfSoundAnnotationDictionary* asSoundAnnotationDictionary() const {return NULL;}

  virtual SkPdfSoundObjectDictionary* asSoundObjectDictionary() {return NULL;}
  virtual const SkPdfSoundObjectDictionary* asSoundObjectDictionary() const {return NULL;}

  virtual SkPdfSourceInformationDictionary* asSourceInformationDictionary() {return NULL;}
  virtual const SkPdfSourceInformationDictionary* asSourceInformationDictionary() const {return NULL;}

  virtual SkPdfSquareOrCircleAnnotation* asSquareOrCircleAnnotation() {return NULL;}
  virtual const SkPdfSquareOrCircleAnnotation* asSquareOrCircleAnnotation() const {return NULL;}

  virtual SkPdfStandardSecurityHandlerDictionary* asStandardSecurityHandlerDictionary() {return NULL;}
  virtual const SkPdfStandardSecurityHandlerDictionary* asStandardSecurityHandlerDictionary() const {return NULL;}

  virtual SkPdfStandardStructureDictionary* asStandardStructureDictionary() {return NULL;}
  virtual const SkPdfStandardStructureDictionary* asStandardStructureDictionary() const {return NULL;}

  virtual SkPdfStreamCommonDictionary* asStreamCommonDictionary() {return NULL;}
  virtual const SkPdfStreamCommonDictionary* asStreamCommonDictionary() const {return NULL;}

  virtual SkPdfStructureElementAccessDictionary* asStructureElementAccessDictionary() {return NULL;}
  virtual const SkPdfStructureElementAccessDictionary* asStructureElementAccessDictionary() const {return NULL;}

  virtual SkPdfStructureElementDictionary* asStructureElementDictionary() {return NULL;}
  virtual const SkPdfStructureElementDictionary* asStructureElementDictionary() const {return NULL;}

  virtual SkPdfStructureTreeRootDictionary* asStructureTreeRootDictionary() {return NULL;}
  virtual const SkPdfStructureTreeRootDictionary* asStructureTreeRootDictionary() const {return NULL;}

  virtual SkPdfSubmitFormActionDictionary* asSubmitFormActionDictionary() {return NULL;}
  virtual const SkPdfSubmitFormActionDictionary* asSubmitFormActionDictionary() const {return NULL;}

  virtual SkPdfTableAttributesDictionary* asTableAttributesDictionary() {return NULL;}
  virtual const SkPdfTableAttributesDictionary* asTableAttributesDictionary() const {return NULL;}

  virtual SkPdfTextAnnotationDictionary* asTextAnnotationDictionary() {return NULL;}
  virtual const SkPdfTextAnnotationDictionary* asTextAnnotationDictionary() const {return NULL;}

  virtual SkPdfTextFieldDictionary* asTextFieldDictionary() {return NULL;}
  virtual const SkPdfTextFieldDictionary* asTextFieldDictionary() const {return NULL;}

  virtual SkPdfThreadActionDictionary* asThreadActionDictionary() {return NULL;}
  virtual const SkPdfThreadActionDictionary* asThreadActionDictionary() const {return NULL;}

  virtual SkPdfThreadDictionary* asThreadDictionary() {return NULL;}
  virtual const SkPdfThreadDictionary* asThreadDictionary() const {return NULL;}

  virtual SkPdfTransitionDictionary* asTransitionDictionary() {return NULL;}
  virtual const SkPdfTransitionDictionary* asTransitionDictionary() const {return NULL;}

  virtual SkPdfTransparencyGroupDictionary* asTransparencyGroupDictionary() {return NULL;}
  virtual const SkPdfTransparencyGroupDictionary* asTransparencyGroupDictionary() const {return NULL;}

  virtual SkPdfTrapNetworkAnnotationDictionary* asTrapNetworkAnnotationDictionary() {return NULL;}
  virtual const SkPdfTrapNetworkAnnotationDictionary* asTrapNetworkAnnotationDictionary() const {return NULL;}

  virtual SkPdfTrapNetworkAppearanceStreamDictionary* asTrapNetworkAppearanceStreamDictionary() {return NULL;}
  virtual const SkPdfTrapNetworkAppearanceStreamDictionary* asTrapNetworkAppearanceStreamDictionary() const {return NULL;}

  virtual SkPdfType0FunctionDictionary* asType0FunctionDictionary() {return NULL;}
  virtual const SkPdfType0FunctionDictionary* asType0FunctionDictionary() const {return NULL;}

  virtual SkPdfType10HalftoneDictionary* asType10HalftoneDictionary() {return NULL;}
  virtual const SkPdfType10HalftoneDictionary* asType10HalftoneDictionary() const {return NULL;}

  virtual SkPdfType16HalftoneDictionary* asType16HalftoneDictionary() {return NULL;}
  virtual const SkPdfType16HalftoneDictionary* asType16HalftoneDictionary() const {return NULL;}

  virtual SkPdfType1HalftoneDictionary* asType1HalftoneDictionary() {return NULL;}
  virtual const SkPdfType1HalftoneDictionary* asType1HalftoneDictionary() const {return NULL;}

  virtual SkPdfType1PatternDictionary* asType1PatternDictionary() {return NULL;}
  virtual const SkPdfType1PatternDictionary* asType1PatternDictionary() const {return NULL;}

  virtual SkPdfType2FunctionDictionary* asType2FunctionDictionary() {return NULL;}
  virtual const SkPdfType2FunctionDictionary* asType2FunctionDictionary() const {return NULL;}

  virtual SkPdfType2PatternDictionary* asType2PatternDictionary() {return NULL;}
  virtual const SkPdfType2PatternDictionary* asType2PatternDictionary() const {return NULL;}

  virtual SkPdfType3FunctionDictionary* asType3FunctionDictionary() {return NULL;}
  virtual const SkPdfType3FunctionDictionary* asType3FunctionDictionary() const {return NULL;}

  virtual SkPdfType5HalftoneDictionary* asType5HalftoneDictionary() {return NULL;}
  virtual const SkPdfType5HalftoneDictionary* asType5HalftoneDictionary() const {return NULL;}

  virtual SkPdfType6HalftoneDictionary* asType6HalftoneDictionary() {return NULL;}
  virtual const SkPdfType6HalftoneDictionary* asType6HalftoneDictionary() const {return NULL;}

  virtual SkPdfURIActionDictionary* asURIActionDictionary() {return NULL;}
  virtual const SkPdfURIActionDictionary* asURIActionDictionary() const {return NULL;}

  virtual SkPdfURIDictionary* asURIDictionary() {return NULL;}
  virtual const SkPdfURIDictionary* asURIDictionary() const {return NULL;}

  virtual SkPdfURLAliasDictionary* asURLAliasDictionary() {return NULL;}
  virtual const SkPdfURLAliasDictionary* asURLAliasDictionary() const {return NULL;}

  virtual SkPdfVariableTextFieldDictionary* asVariableTextFieldDictionary() {return NULL;}
  virtual const SkPdfVariableTextFieldDictionary* asVariableTextFieldDictionary() const {return NULL;}

  virtual SkPdfViewerPreferencesDictionary* asViewerPreferencesDictionary() {return NULL;}
  virtual const SkPdfViewerPreferencesDictionary* asViewerPreferencesDictionary() const {return NULL;}

  virtual SkPdfWebCaptureCommandDictionary* asWebCaptureCommandDictionary() {return NULL;}
  virtual const SkPdfWebCaptureCommandDictionary* asWebCaptureCommandDictionary() const {return NULL;}

  virtual SkPdfWebCaptureCommandSettingsDictionary* asWebCaptureCommandSettingsDictionary() {return NULL;}
  virtual const SkPdfWebCaptureCommandSettingsDictionary* asWebCaptureCommandSettingsDictionary() const {return NULL;}

  virtual SkPdfWebCaptureDictionary* asWebCaptureDictionary() {return NULL;}
  virtual const SkPdfWebCaptureDictionary* asWebCaptureDictionary() const {return NULL;}

  virtual SkPdfWebCaptureImageSetDictionary* asWebCaptureImageSetDictionary() {return NULL;}
  virtual const SkPdfWebCaptureImageSetDictionary* asWebCaptureImageSetDictionary() const {return NULL;}

  virtual SkPdfWebCaptureInformationDictionary* asWebCaptureInformationDictionary() {return NULL;}
  virtual const SkPdfWebCaptureInformationDictionary* asWebCaptureInformationDictionary() const {return NULL;}

  virtual SkPdfWebCapturePageSetDictionary* asWebCapturePageSetDictionary() {return NULL;}
  virtual const SkPdfWebCapturePageSetDictionary* asWebCapturePageSetDictionary() const {return NULL;}

  virtual SkPdfWidgetAnnotationDictionary* asWidgetAnnotationDictionary() {return NULL;}
  virtual const SkPdfWidgetAnnotationDictionary* asWidgetAnnotationDictionary() const {return NULL;}

  virtual SkPdfWindowsLaunchActionDictionary* asWindowsLaunchActionDictionary() {return NULL;}
  virtual const SkPdfWindowsLaunchActionDictionary* asWindowsLaunchActionDictionary() const {return NULL;}

  virtual SkPdfXObjectDictionary* asXObjectDictionary() {return NULL;}
  virtual const SkPdfXObjectDictionary* asXObjectDictionary() const {return NULL;}

  virtual SkPdfImageDictionary* asImageDictionary() {return NULL;}
  virtual const SkPdfImageDictionary* asImageDictionary() const {return NULL;}

  virtual SkPdfType1FormDictionary* asType1FormDictionary() {return NULL;}
  virtual const SkPdfType1FormDictionary* asType1FormDictionary() const {return NULL;}

public:
private:
public:
  SkPdfBlockLevelStructureElementsDictionary(const PdfMemDocument* podofoDoc = NULL, const PdfObject* podofoObj = NULL) : SkPdfDictionary(podofoDoc, podofoObj) {}

  virtual bool valid() const {return true;}

  SkPdfBlockLevelStructureElementsDictionary& operator=(const SkPdfBlockLevelStructureElementsDictionary& from) {this->fPodofoDoc = from.fPodofoDoc; this->fPodofoObj = from.fPodofoObj; return *this;}

/** (Optional) The amount of extra space preceding the before edge of the BLSE,
 *  measured in default user space units in the block-progression direction. This
 *  value is added to any adjustments induced by the LineHeight attributes of
 *  ILSEs within the first line of the BLSE (see "Layout Attributes for ILSEs" on
 *  page 646). If the preceding BLSE has a SpaceAfter attribute, the greater of the
 *  two attribute values is used. Default value: 0.
 *  Note: This attribute is disregarded for the first BLSE placed in a given reference
 *  area.
**/
  bool has_SpaceBefore() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "SpaceBefore", "", NULL));
  }

  double SpaceBefore() const {
    double ret;
    if (DoubleFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "SpaceBefore", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return 0;
  }

/** (Optional) The amount of extra space following the after edge of the BLSE,
 *  measured in default user space units in the block-progression direction. This
 *  value is added to any adjustments induced by the LineHeight attributes of
 *  ILSEs within the last line of the BLSE (see "Layout Attributes for ILSEs" on
 *  page 646). If the following BLSE has a SpaceBefore attribute, the greater of
 *  the two attribute values is used. Default value: 0.
 *  Note: This attribute is disregarded for the last BLSE placed in a given reference
 *  area.
**/
  bool has_SpaceAfter() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "SpaceAfter", "", NULL));
  }

  double SpaceAfter() const {
    double ret;
    if (DoubleFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "SpaceAfter", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return 0;
  }

/** (Optional) The distance from the start edge of the reference area to that of the
 *  BLSE, measured in default user space units in the inline-progression direc-
 *  tion. This attribute applies only to structure elements with a Placement
 *  attribute of Block or Start (see "General Layout Attributes" on page 640); it is
 *  disregarded for those with other Placement values. Default value: 0.
 *  Note: A negative value for this attribute places the start edge of the BLSE out-
 *  side that of the reference area. The results are implementation-dependent and
 *  may not be supported by all Tagged PDF consumer applications or export
 *  formats.
 *  Note: If a structure element with a StartIndent attribute is placed adjacent to a
 *  floating element with a Placement attribute of Start, the actual value used for
 *  the element's starting indent will be its own StartIndent attribute or the inline
 *  extent of the adjacent floating element, whichever is greater. This value may
 *  then be further adjusted by the element's TextIndent attribute, if any.
**/
  bool has_StartIndent() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "StartIndent", "", NULL));
  }

  double StartIndent() const {
    double ret;
    if (DoubleFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "StartIndent", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return 0;
  }

/** (Optional) The distance from the end edge of the BLSE to that of the ref-
 *  erence area, measured in default user space units in the inline-progression
 *  direction. This attribute applies only to structure elements with a Placement
 *  attribute of Block or End (see "General Layout Attributes" on page 640); it is
 *  disregarded for those with other Placement values. Default value: 0.
 *  Note: A negative value for this attribute places the end edge of the BLSE outside
 *  that of the reference area. The results are implementation-dependent and may
 *  not be supported by all Tagged PDF consumer applications or export formats.
 *  Note: If a structure element with an EndIndent attribute is placed adjacent to a
 *  floating element with a Placement attribute of End, the actual value used for the
 *  element's ending indent will be its own EndIndent attribute or the inline extent
 *  of the adjacent floating element, whichever is greater.
**/
  bool has_EndIndent() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "EndIndent", "", NULL));
  }

  double EndIndent() const {
    double ret;
    if (DoubleFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "EndIndent", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return 0;
  }

/** (Optional; applies only to some BLSEs, as described below) The additional
 *  distance, measured in default user space units in the inline-progression
 *  direction, from the start edge of the BLSE, as specified by StartIndent
 *  (above), to that of the first line of text. A negative value indicates a hanging
 *  indent. Default value: 0.
 *  This attribute applies only to paragraphlike BLSEs and those of structure
 *  types Lbl (Label), LBody (List body), TH (Table header), and TD (Table data),
 *  provided that they contain content other than nested BLSEs.
**/
  bool has_TextIndent() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TextIndent", "", NULL));
  }

  double TextIndent() const {
    double ret;
    if (DoubleFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TextIndent", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return 0;
  }

/** (Optional; applies only to BLSEs containing text) The alignment, in the inline-
 *  progression direction, of text and other content within lines of the BLSE:
 *  Start        Aligned with the start edge.
 *  Center       Centered between the start and end edges.
 *  End          Aligned with the end edge.
 *  Justify      Aligned with both the start and end edges, with internal
 *          spacing within each line expanded, if necessary, to achieve
 *          such alignment. The last (or only) line is aligned with the
 *          start edge only, as for Start (above).
 *          Default value: Start.
**/
  bool has_TextAlign() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TextAlign", "", NULL));
  }

  std::string TextAlign() const {
    std::string ret;
    if (NameFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "TextAlign", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return "";
  }

/** (Illustrations and tables only; required if the element appears in its entirety on a
 *  single page) An array of four numbers in default user space units giving the
 *  coordinates of the left, bottom, right, and top edges, respectively, of the ele-
 *  ment's bounding box (the rectangle that completely encloses its visible con-
 *  tent). This attribute applies only to elements of structure type Figure,
 *  Formula, Form, or Table.
**/
  bool has_BBox() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "BBox", "", NULL));
  }

  SkRect BBox() const {
    SkRect ret;
    if (SkRectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "BBox", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return SkRect();
  }

/** (Optional; illustrations, tables, table headers, and table cells only; strongly
 *  recommended for table cells) The desired width of the element's content
 *  rectangle (see "Content and Allocation Rectangles" on page 648), measured
 *  in default user space units in the inline-progression direction. This attribute
 *  applies only to elements of structure type Figure, Formula, Form, Table, TH
 *  (Table header), or TD (Table data).
 *  The name Auto in place of a numeric value indicates that no specific width
 *  constraint is to be imposed; the element's width is determined by the intrin-
 *  sic width of its content. Default value: Auto.
**/
  bool has_Width() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "Width", "", NULL));
  }

  bool isWidthANumber() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "Width", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Real || ret->podofo()->GetDataType() == ePdfDataType_Number;
  }

  double getWidthAsNumber() const {
    double ret = 0;
    if (DoubleFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "Width", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return 0;
  }

  bool isWidthAName() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "Width", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Name;
  }

  std::string getWidthAsName() const {
    std::string ret = "";
    if (NameFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "Width", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return "";
  }

/** (Optional; illustrations, tables, table headers, and table cells only) The desired
 *  height of the element's content rectangle (see "Content and Allocation
 *  Rectangles" on page 648), measured in default user space units in the block-
 *  progression direction. This attribute applies only to elements of structure
 *  type Figure, Formula, Form, Table, TH (Table header), or TD (Table data).
 *  The name Auto in place of a numeric value indicates that no specific height
 *  constraint is to be imposed; the element's height is determined by the intrin-
 *  sic height of its content. Default value: Auto.
**/
  bool has_Height() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "Height", "", NULL));
  }

  bool isHeightANumber() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "Height", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Real || ret->podofo()->GetDataType() == ePdfDataType_Number;
  }

  double getHeightAsNumber() const {
    double ret = 0;
    if (DoubleFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "Height", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return 0;
  }

  bool isHeightAName() const {
    SkPdfObject* ret = NULL;
    if (!ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "Height", "", &ret)) return false;
    return ret->podofo()->GetDataType() == ePdfDataType_Name;
  }

  std::string getHeightAsName() const {
    std::string ret = "";
    if (NameFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "Height", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return "";
  }

/** (Optional; table cells only) The alignment, in the block-progression direction,
 *  of content within the table cell:
 *       Before        Before edge of the first child's allocation rectangle aligned
 *                     with that of the table cell's content rectangle.
 *       Middle        Children centered within the table cell, so that the distance
 *                     between the before edge of the first child's allocation rec-
 *                     tangle and that of the table cell's content rectangle is the same
 *                     as the distance between the after edge of the last child's allo-
 *                     cation rectangle and that of the table cell's content rectangle.
 *       After         After edge of the last child's allocation rectangle aligned with
 *                     that of the table cell's content rectangle.
 *       Justify       Children aligned with both the before and after edges of the
 *                     table cell's content rectangle. The first child is placed as
 *                     described above for Before and the last child as described for
 *                     After, with equal spacing between the children. If there is only
 *                     one child, it is aligned with the before edge only, as for Before.
 *   This attribute applies only to elements of structure type TH (Table header) or
 *   TD (Table data), and controls the placement of all BLSEs that are children of
 *   the given element. The table cell's content rectangle (see "Content and Allo-
 *   cation Rectangles" on page 648) becomes the reference area for all of its
 *   descendants. Default value: Before.
**/
  bool has_BlockAlign() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "BlockAlign", "", NULL));
  }

  std::string BlockAlign() const {
    std::string ret;
    if (NameFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "BlockAlign", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return "";
  }

/** (Optional; table cells only) The alignment, in the inline-progression direction,
 *  of content within the table cell:
 *     Start         Start edge of each child's allocation rectangle aligned with
 *                   that of the table cell's content rectangle
 *     Center        Each child centered within the table cell, so that the distance
 *                   between the start edges of the child's allocation rectangle and
 *                   the table cell's content rectangle is the same as the distance
 *                   between their end edges
 *     End           End edge of each child's allocation rectangle aligned with
 *                   that of the table cell's content rectangle
 *  This attribute applies only to elements of structure type TH (Table header) or
 *  TD (Table data), and controls the placement of all BLSEs that are children of
 *  the given element. The table cell's content rectangle (see "Content and Allo-
 *  cation Rectangles" on page 648) becomes the reference area for all of its
 *  descendants. Default value: Start.
**/
  bool has_InlineAlign() const {
    return (ObjectFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "InlineAlign", "", NULL));
  }

  std::string InlineAlign() const {
    std::string ret;
    if (NameFromDictionary(fPodofoDoc, fPodofoObj->GetDictionary(), "InlineAlign", "", &ret)) return ret;
    // TODO(edisonn): warn about missing required field, assert for known good pdfs
    return "";
  }

};

#endif  // __DEFINED__SkPdfBlockLevelStructureElementsDictionary