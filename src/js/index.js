const schoolWebsite = "https://www.ghpsindore.org/";
const collegeWebsite = "https://www.medicaps.ac.in/";
const pythonBasicCertificateLink = "https://www.hackerrank.com/certificates/5d2540a9e309";

/// this path string will be changed with the actual web URL after this website will be uploaded.
/// contactMePagePath, stores the relative path of contactme.htm page (HTML File)...

const contactMePagePath = "src/contactme/contactme.htm";

const redirectToSchoolWebsite = function redirectToSchoolWebsite() {
  window.open(schoolWebsite);
};

const redirectToCollegeWebsite = function redirectToCollegeWebsite() {
  window.open(collegeWebsite);
};

const redirectToContactMePage = function redirectToContactMePage() {
  window.open(contactMePagePath);
};

const redirectToPythonBasicCertification = function redirectToPythonBasicCertification() {
  window.open(pythonBasicCertificateLink)
}

